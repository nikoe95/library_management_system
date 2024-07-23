#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


// ASCII art representation for each character
const std::vector<std::string> A = {
    "  ___  ",
    " / _ \\ ",
    "/ /_\\ \\",
    "|  _  |",
    "| | | |",
    "\\_| |_/",
};

const std::vector<std::string> B = {
    "______ ",
    "| ___ \\",
    "| |_/ /",
    "| ___ \\",
    "| |_/ /",
    "\\____/ ",
};

const std::vector<std::string> C = {
    " _____ ",
    "/  __ \\",
    "| /  \\/",
    "| |    ",
    "| \\__/\\",
    " \\____/",
};

const std::vector<std::string> D = {
    "______ ",
    "|  _  \\",
    "| | | |",
    "| | | |",
    "| |/ / ",
    "|___/  ",
};

const std::vector<std::string> E = {
    " _____ ",
    "|  ___|",
    "| |__  ",
    "|  __| ",
    "| |___ ",
    "\\____/ ",
};

const std::vector<std::string> F = {
    "______ ",
    "|  ___|",
    "| |_   ",
    "|  _|  ",
    "| |    ",
    "\\_|    ",
};

const std::vector<std::string> G = {
    " _____ ",
    "|  __ \\",
    "| |  \\/",
    "| | __ ",
    "| |_\\ \\",
    " \\____/",
};

const std::vector<std::string> H = {
    " _   _ ",
    "| | | |",
    "| |_| |",
    "|  _  |",
    "| | | |",
    "\\_| |_/",
};

const std::vector<std::string> I = {
    " _____ ",
    "|_   _|",
    "  | |  ",
    "  | |  ",
    " _| |_ ",
    " \\___/ ",
};

const std::vector<std::string> J = {
    "   ___ ",
    "  |_  |",
    "    | |",
    "    | |",
    "/\\__/ /",
    "\\____/ ",
};

const std::vector<std::string> K = {
    " _   __",
    "| | / /",
    "| |/ / ",
    "|    \\ ",
    "| |\\  \\",
    "\\_| \\_/",
};

const std::vector<std::string> L = {
    " _     ",
    "| |    ",
    "| |    ",
    "| |    ",
    "| |____",
    "\\_____/",
};

const std::vector<std::string> M = {
    "___  ___",
    "|  \\/  |",
    "| .  . |",
    "| |\\/| |",
    "| |  | |",
    "\\_|  |_/",
};

const std::vector<std::string> N = {
    " _   _ ",
    "| \\ | |",
    "|  \\| |",
    "| . ` |",
    "| |\\  |",
    "\\_| \\_/",
};

const std::vector<std::string> O = {
    " _____ ",
    "|  _  |",
    "| | | |",
    "| | | |",
    "\\ \\_/ /",
    " \\___/ ",
};

const std::vector<std::string> P = {
    "______ ",
    "| ___ \\",
    "| |_/ /",
    "|  __/ ",
    "| |    ",
    "\\_|    ",
};

const std::vector<std::string> Q = {
    " _____ ",
    "|  _  |",
    "| | | |",
    "| | | |",
    "\\ \\/' /",
    " \\_/\\_\\",
};

const std::vector<std::string> R = {
    "______ ",
    "| ___ \\",
    "| |_/ /",
    "|    / ",
    "| |\\ \\ ",
    "\\_| \\_|",
};

const std::vector<std::string> S = {
    " _____ ",
    "/  ___|",
    "\\ `--. ",
    " `--. \\",
    "/\\__/ /",
    "\\____/ ",
};

const std::vector<std::string> T = {
    "_______ ",
    "|_   _|",
    "  | |  ",
    "  | |  ",
    "  | |  ",
    "  \\_/  ",
};

const std::vector<std::string> U = {
    " _   _ ",
    "| | | |",
    "| | | |",
    "| | | |",
    "| |_| |",
    " \\___/ ",
};

const std::vector<std::string> V = {
    " _   _ ",
    "| | | |",
    "| | | |",
    "| | | |",
    "| |_| |",
    " \\___/ ",
};

const std::vector<std::string> W = {
    " _    _ ",
    "| |  | |",
    "| |  | |",
    "| |/\\| |",
    "\\  /\\  /",
    " \\/  \\/ ",
};

const std::vector<std::string> X = {
    "__   __",
    "\\ \\ / /",
    " \\ V / ",
    " /   \\ ",
    "/ /^\\ \\",
    "\\/   \\/",
};

const std::vector<std::string> Y = {
    "__   __",
    "\\ \\ / /",
    " \\ V / ",
    "  \\ /  ",
    "  | |  ",
    "  \\_/  ",
};

const std::vector<std::string> Z = {
    " ______",
    "|___  /",
    "   / / ",
    "  / /  ",
    "./ /___",
    "\\_____/",
};

const std::vector<std::string> space = {
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
};

const std::unordered_map<char, std::vector<std::string>> ascii_art = {
    {'A', A}, {'B', B}, {'C', C}, {'D', D}, {'E', E}, {'F', F}, {'G', G},
    {'H', H}, {'I', I}, {'J', J}, {'K', K}, {'L', L}, {'M', M}, {'N', N},
    {'O', O}, {'P', P}, {'Q', Q}, {'R', R}, {'S', S}, {'T', T}, {'U', U},
    {'V', V}, {'W', W}, {'X', X}, {'Y', Y}, {'Z', Z}, {' ', space}
};

void print_ascii_art(const std::string &text);