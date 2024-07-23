#pragma once
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <functional>
#include <memory>
#include "book.hpp"

class Library
{
    public:
    void sort_books(std::function<std::string(const Book&)> get_field, const std::string& field_name);

    bool rent_book(const std::string & book_name, const std::string & customer_name, const std::string & customer_card_id);
    bool add_book(const std::string & book_name, const std::string & author, const std::string & genre, const int & ordinal_number);
    
    void sort_books_by_author();
    void sort_books_by_genre();
    void sort_books_by_title();
    bool validate_book(const std::string & book_name, const std::string & author, const std::string & genre) const;

    private:
    std::unordered_multimap<std::string, std::shared_ptr<Book>> books_in_library_;
    
};