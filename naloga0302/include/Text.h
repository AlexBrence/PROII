#pragma once

#include <string>
#include <vector>

class Text {
    private:
        std::vector<std::string> lines;

    public:
        Text(std::vector<std::string> lines);

        int countVowels() const;
        int countConsonants() const;
        bool containsString(const std::string& str) const;
        std::string toString() const;

        static bool isInt(const std::string& str);
        static int stringToInt(const std::string& str);
        static bool isValidEmail(const std::string& str);
        static std::string toUpperCase(const std::string& str);
        static std::string correctPropositions(const std::string& str);
};


