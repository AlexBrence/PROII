#pragma once

#include <string>
#include "Task.h"

class ExpirationTask : public Task {
    private:
        std::string assignee;
        DateTime deadline;
        std::string state;      // TODO, DOING, DONE

    public:
        ExpirationTask(const std::string& name, const std::string& description, const DateTime& added, 
                       const std::string& assignee, const DateTime& deadline, const std::string& state);

        
        DateTime getDateTime() const;
        std::string getName() const;
        std::string toString() const override;
};


