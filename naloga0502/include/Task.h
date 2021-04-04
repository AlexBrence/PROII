#pragma once

#include <string>
#include "DateTime.h"

// ABSTRACT CLASS
class Task {
    protected:
        std::string name, description;
        DateTime added;

    public:
        Task();
        Task(const std::string& name, const std::string& description, const DateTime& added);
        virtual ~Task() = default;

        virtual DateTime getDateTime() const = 0;
        virtual std::string getName() const = 0;
        virtual std::string toString() const = 0;
};


