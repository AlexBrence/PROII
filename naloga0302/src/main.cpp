#include <iostream>
#include <vector>

#include "Text.h"



int main() {
    std::vector<std::string> someText;
    someText.emplace_back("Lorem ipsum dolor sit amet, consectetur adipiscing elit,");
    someText.emplace_back("ncididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, q");
    someText.emplace_back("exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.");
    someText.emplace_back("Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.");


    Text text(someText);
    std::cout << "***** toString METHOD *****\n";
    std::cout << text.toString() << std::endl;


    std::cout << "\n***** countVowels METHOD *****\n";
    std::cout << "Number of vowels: " << text.countVowels() << std::endl;


    std::cout << "\n***** countConsonants METHOD *****\n";
    std::cout << "Number of consonants: " << text.countConsonants() << std::endl;


    std::cout << "\n***** containsString METHOD *****\n";
    std::string inText = "ullam";
    std::string notInText = "smrkci";
    std::cout << "is substring " << inText << " in text: "<< (text.containsString(inText) ? "yes" : "nope") << std::endl;
    std::cout << "is substring " << notInText << " in text: "<< (text.containsString(notInText) ? "yes" : "nope") << std::endl;


    std::cout << "\n***** isInt STATIC METHOD *****\n";
    std::string notInt = "123osd2";
    std::string isInt = "12322";
    std::cout << notInt << (Text::isInt(notInt) ? " is int" : " is not int") << std::endl;
    std::cout << isInt << (Text::isInt(isInt) ? " is int" : " is not int") << std::endl;


    std::cout << "\n***** stringToInt STATIC METHOD *****\n";
    int noInt = Text::stringToInt("2343sf");
    int yesInt = Text::stringToInt("2343234");
    std::cout << "Not int: " << noInt << ", Int: " << yesInt << std::endl;


    std::cout << "\n***** isValidEmail STATIC METHOD *****\n";
    std::string invalid = "sunce.zuto.com";
    std::string invalid2 = "plavo.nebo@com";
    std::string valid = "bela.riba@gmail.com";
    std::cout << invalid << " is " << (Text::isValidEmail(invalid) ? "valid" : "invalid") << std::endl;
    std::cout << invalid2 << " is " << (Text::isValidEmail(invalid2) ? "valid" : "invalid") << std::endl;
    std::cout << valid << " is " << (Text::isValidEmail(valid) ? "valid" : "invalid") << std::endl;


    std::cout << "\n***** toUpperCase STATIC METHOD *****\n";
    std::string stringInLower = "this is just a random string";
    std::string stringInUpper = Text::toUpperCase(stringInLower);
    std::cout << "Before: " << stringInLower;
    std::cout << "\nAfter : " << stringInUpper << std::endl;


    std::cout << "\n***** correctProposition STATIC METHOD *****\n";
    std::string wrong = "Oblekel si je staro majico in jo odnesel k krojacu. Videl sem novega gosta in sem mu h slascici postregel se brezplacno kavo.";
    std::string right = Text::correctPropositions(wrong);
    std::cout << "Wrong version: " << wrong << std::endl;
    std::cout << "Corrected version: " << right << std::endl;


    return 0;
}
