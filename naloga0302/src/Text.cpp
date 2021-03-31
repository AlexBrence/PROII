#include "Text.h"

#include <sstream>


Text::Text(std::vector<std::string> lines) : lines(lines) {
}



int Text::countVowels() const {
    int number = 0;

    for (const auto& line : lines) {
        for (size_t i = 0; i < line.size(); i++) {
            if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' ||
                line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U') {
                number++;
            }
        }
    }
    return number;
}


int Text::countConsonants() const {
    int number = 0;

    for (const auto& line : lines) {
        for (size_t i = 0; i < line.size(); i++) {
            if (line[i] != 'a' && line[i] != 'e' && line[i] != 'i' && line[i] != 'o' && line[i] != 'u' &&
                line[i] != 'A' && line[i] != 'E' && line[i] != 'I' && line[i] != 'O' && line[i] != 'U') {
                number++;
            }
        }
    }
    return number;
}


bool Text::containsString(const std::string& str) const {
    for (const auto& line : lines) {
        if (line.find(str) != std::string::npos) {
            return true;
        }
    }
    return false;
}


std::string Text::toString() const {
    std::stringstream ss;

    for (const auto& line : lines) {
        ss << line;
    }
    return ss.str();
}


// STATIC METHODS 

bool Text::isInt(const std::string& str) {
    for (const auto& s : str) {
        if (!isdigit(s)) {
            return false;
        }
    }
    return true;
}


int Text::stringToInt(const std::string& str) {
    return Text::isInt(str) ? std::stoi(str) : INT32_MIN;
}



bool Text::isValidEmail(const std::string& str) {
    bool at = false;

    for (const auto& s : str) {
        if (s == '@') {
            at = true;
        }
        if (s == '.' && at) {
            return true;
        }
    }
    return false;
}



std::string Text::toUpperCase(const std::string& str) {
    std::stringstream ss;

    for (auto& s : str) {
        if (islower(s)) {
            ss << (char)toupper(s);
        } else {
            ss << s;
        }
    }
    return ss.str();
}


std::string Text::correctPropositions(const std::string& str) {
    std::string tmp = str;

    for (size_t i = 0; i < tmp.size(); i++) {
        if ((tmp[i] == 'k' || tmp[i] == 'h') && i + 1 < tmp.size() && tmp[i - 1] == ' ' && tmp[i + 1] == ' ') {
            if (tmp[i] == 'k' && (tmp[i + 2] == 'g' || tmp[i + 2] == 'k')) {
                tmp[i] = 'h';
            } else if (tmp[i] == 'h' && (tmp[i + 2] != 'g' && tmp[i + 2] != 'k')) {
                tmp[i] = 'k';
            }
        }
    } 
    return tmp;
}
