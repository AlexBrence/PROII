#pragma once

#include <string>
#include "DateTime.h"

class Task {
    protected:
        std::string name, description;
        DateTime added;

    public:
        Task(const std::string& name, const std::string& description, const DateTime& added);

        virtual std::string toString() const;
};


