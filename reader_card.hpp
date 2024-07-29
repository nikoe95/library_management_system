#pragma once
#include "card.hpp"
#include <string>
#include <vector>
#include <iostream>

class ReaderCard : public Card
{
    public:
    ReaderCard(const std::string & reader_name, CardType card_type);
    ~ReaderCard();
    void read_card_data() override;
    private:
    virtual void assign_book_to_card(const int & ordinal_number);
    std::vector<int> ordinal_numbers_;
};