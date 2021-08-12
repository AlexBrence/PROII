#pragma once
#include <string>

class Xml {
    public:
        virtual ~Xml() = default;
        virtual std::string xmlString() const = 0;
        virtual std::string toXml() const = 0;
};


