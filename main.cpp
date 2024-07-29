#include <iostream>
#include "book.hpp"
#include "library.hpp"
#include "library_manager.hpp"
#include "reader_card.hpp"

int main()
{
    auto library = std::make_unique<Library>(Library());

    library->add_book("Harry Potter", "Rowling", "Fantasy", 0);
    library->add_book("Harry Potter", "Rowling", "Fantasy", 1);

    library->rent_book("Harry Potter", "Dawid Kowalski", "1212");
    library->rent_book("Harry Potter", "Dawid Nowak", "1313");
    library->rent_book("Harry Potter", "Dawid Cioch", "1414");


    ReaderCard user_card("Dawid Nowak", Card::CardType::DIRECTOR);
    user_card.read_card_data();
}