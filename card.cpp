#include "card.hpp"

std::ostream& operator<<(std::ostream& os, Card::CardType card_type) 
{
    switch(card_type)
    {
        case Card::CardType::DIRECTOR:
            os << "Director\n";
            break;
        case Card::CardType::LIBRARIAN:
            os << "Librarian\n";
            break;
        case Card::CardType::READER:
            os << "Reader\n";
            break;
        default:
            os << "Unrecognized card type\n";
            break;
    }
    return os;
}