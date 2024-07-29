#include "reader_card.hpp"

ReaderCard::ReaderCard(const std::string & reader_name, CardType card_type) : Card(reader_name, card_type)
{

}

ReaderCard::~ReaderCard()
{


}

void ReaderCard::read_card_data()
{
    std::cout << "Card user: " << card_user_name_ << std::endl;
    std::cout << "Card type: " << card_type_ << std::endl;
    std::cout << "Card id number: " << card_id_ << std::endl;
    std::cout << "Books ordinal numbers assigned to user: " << std::endl;
    for(const auto & ordinal_number : ordinal_numbers_)
    {
        std::cout << "[" << ordinal_number << "]" << std::endl;
    }
}

void ReaderCard::assign_book_to_card(const int & ordinal_number)
{
    ordinal_numbers_.push_back(ordinal_number);
}