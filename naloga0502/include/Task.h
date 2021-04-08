#pragma once

#include <string>
#include "DateTime.h"


class Task {
    protected:
        std::string name, description;
        DateTime added;

    public:
        Task();
        Task(const std::string& name, const std::string& description, const DateTime& added);
        virtual ~Task() = default;

        virtual std::string getName() const;
        virtual DateTime getDateTime() const;
        virtual std::string toString() const;
        
        virtual bool isBeforeDeadline(const DateTime& deadline) const = 0;
};


