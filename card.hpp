#pragma once
#include <string>
#include <iostream>

class Card
{
    public:
    

    enum class CardType {
        DIRECTOR,
        LIBRARIAN,
        READER
    };

    Card(std::string card_user_name, CardType card_type) : card_user_name_(card_user_name),
                                                           card_type_(card_type) {};
    virtual ~Card() {};
    virtual void read_card_data() = 0;

    protected:
    CardType card_type_;
    int card_id_ {};
    std::string card_user_name_;
};

std::ostream& operator<<(std::ostream& os, Card::CardType card_type);