#include "letters.hpp"


void print_ascii_art(const std::string &text) {
    for (int i = 0; i < 6; ++i) {
        for (char c : text) {
            char upper_char = std::toupper(c);
            if (ascii_art.find(upper_char) != ascii_art.end()) {
                std::cout << ascii_art.at(upper_char)[i] << "  ";
            }
        }
        std::cout << std::endl;
    }
}