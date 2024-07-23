#include "library.hpp"

bool Library::rent_book(const std::string & book_name, const std::string & customer_name, const std::string & customer_card_id)
{
    if(books_in_library_.find(book_name) == books_in_library_.end())
    {
        std::cout << "There is no book \"" << book_name << "\" in library collection" << std::endl;
    }

    auto range = books_in_library_.equal_range(book_name);
    std::cout << "Books with the title '" << book_name << "':" << std::endl;
    bool book_successfully_borrowed {};
    for (auto it = range.first; it != range.second; ++it) 
    {   
        Book& book = *it->second;
        if(book.check_book_availability())
        {
            std::cout << "Title: " << book.get_title()
            << ", Author: " << book.get_author()
            << ", Genre: " << book.get_genre() 
            << ", Ordinal number: " << book.get_ordinal_number() <<  std::endl;
            book.rent_book(customer_name, customer_card_id);
            book_successfully_borrowed = true;
            break;
         }
    }

    if(!book_successfully_borrowed)
    {
        std::cout << "All books with title \"" << book_name << "\" are currently on loan " << std::endl;
        return false; 

    }

    return true;
}

bool Library::add_book(const std::string & book_name, const std::string & author, const std::string & genre, const int & ordinal_number)
{
        if(!validate_book(book_name, author, genre))
            return false;
            
        books_in_library_.insert({book_name, std::make_shared<Book>(book_name, author, genre, ordinal_number)});        
        return true;
}

void Library::sort_books(std::function<std::string(const Book&)> get_field, const std::string& field_name) {
    std::vector<std::pair<std::string, std::shared_ptr<Book>>> vec(books_in_library_.begin(), books_in_library_.end());
    std::sort(vec.begin(), vec.end(), [&get_field](const std::pair<std::string, std::shared_ptr<Book>>& a, const std::pair<std::string, std::shared_ptr<Book>>& b) {
        return get_field(*a.second) < get_field(*b.second);
    });

    std::cout << "Books sorted by " << field_name << ":" << std::endl;
    for (const auto& el : vec) {
        std::cout << el.first << std::endl;
    }
}

void Library::sort_books_by_author()
{
    sort_books(Book::get_author, "author");
}

void Library::sort_books_by_genre()
{
    sort_books(Book::get_genre, "genre");
}

void Library::sort_books_by_title()
{
    sort_books(Book::get_title, "title");
}


 bool Library::validate_book(const std::string & book_name, const std::string & author, const std::string & genre) const
 {
    if(book_name.empty()) {
        std::cout << "Error while adding a book, name is empty" << std::endl;
        return false;  
    }
    
    if(author.empty()) {
        std::cout << "Error while adding a book, author is empty" << std::endl;
        return false;
    }

    if(genre.empty()) {
        std::cout << "Error while adding a book, genre is empty" << std::endl;
        return false;
    }
    return true;
 }