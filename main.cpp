#include <iostream>
#include "book.hpp"
#include "library.hpp"
#include "library_manager.hpp"

int main()
{
    auto library = std::make_unique<Library>(Library());

    library->add_book("Harry Potter", "Rowling", "Fantasy", 0);
    library->add_book("Harry Potter", "Rowling", "Fantasy", 1);

    library->rent_book("Harry Potter", "Dawid Kowalski", "1212");
    library->rent_book("Harry Potter", "Dawid Nowak", "1313");
    library->rent_book("Harry Potter", "Dawid Cioch", "1414");

}

// Pomysly 
// Dodac klase, która będzie reprezentowala karte uzytkownika (mozna stworzyc rozne karty, pocwiczy sie dziedziczenie)