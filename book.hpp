#pragma once

#include <string>
#include <iostream>
#include <chrono>

class Book 
{
    public:
    Book(std::string title, std::string author, std::string genre, int ordinal_number);
    Book(const Book& other)
        : title_(other.title_), author_(other.author_), genre_(other.genre_), ordinal_number_(other.ordinal_number_) {}


    Book& operator=(const Book& other);

    std::string get_title() const;
    std::string get_author() const;
    std::string get_genre() const;
    int get_ordinal_number() const;
    void print_book_data() const;
    void increase_number_of_books();
    void decrease_number_of_books();
    int get_number_of_books() const;
    bool check_book_availability() const;
    void rent_book(const std::string & customer_name,  const std::string & customer_id);

    public:
    int number_of_books_ {};
    int ordinal_number_;
    std::string title_;
    std::string author_;
    std::string genre_;
    bool availability_ {};
    std::string customer_borrowed_book_ {};
    std::chrono::system_clock::time_point book_borrowed_time_;
    std::chrono::system_clock::time_point return_date_;

    static constexpr int book_rental_time_ {31 * 24 * 60 * 60};

};