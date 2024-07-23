#include "book.hpp"

Book::Book(std::string title, std::string author, std::string genre, int ordinal_number) : 
        title_(title),
        author_(author),
        genre_(genre),
        ordinal_number_(ordinal_number)
{
        std::cout << "Book " << title_ << " added to library" << std::endl;
        availability_ = true;
}

Book& Book::operator=(const Book& other) {
    if (this != &other) { 
        title_ = other.title_;
        author_ = other.author_;
        genre_ = other.genre_;
        number_of_books_ = other.number_of_books_;
        availability_ = other.availability_;
    }
    return *this;
}

std::string Book::get_title() const
{
        return title_;

}
    
std::string Book::get_author() const
{
        return author_;

}
    
std::string Book::get_genre() const
{
        return genre_;

}

int Book::get_ordinal_number() const
{
        return ordinal_number_;
}

void Book::rent_book(const std::string & customer_name,  const std::string & customer_id)
{
        customer_borrowed_book_ = customer_name;
        book_borrowed_time_ = std::chrono::system_clock::now();
        return_date_ = book_borrowed_time_ + std::chrono::seconds(book_rental_time_);
        auto now = std::chrono::system_clock::to_time_t(book_borrowed_time_);
        auto return_date_time = std::chrono::system_clock::to_time_t(return_date_);
        std::cout << "Book borrowed at: " << std::ctime(&now);
        std::cout << "Book return date: " << std::ctime(&return_date_time);
        availability_ = false;
}
    
void Book::print_book_data() const
{
        std::cout << "\"" << title_ << "\", " <<  author_ << ", " << genre_ << std::endl; 

}

void Book::increase_number_of_books()
{
         number_of_books_++;
         std::cout << "Current number of books " << title_ <<  " in the library: " << Book::number_of_books_ << std::endl; 
}

void Book::decrease_number_of_books()
{
        number_of_books_--;
        std::cout << "Current number of books " << title_ <<  " in the library: " << Book::number_of_books_ << std::endl;
}

int Book::get_number_of_books() const
{
        return number_of_books_;

}

bool Book::check_book_availability() const
{
        std::cout << "Book: " << title_ << " availability: " << availability_ << std::endl;
        return availability_;
}