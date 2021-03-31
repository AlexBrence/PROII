#pragma once

#include <string>
#include "ExpirationTask.h"

class LocationTask : public ExpirationTask {
    private:
        std::string location;

    public:
        LocationTask(const std::string& name, const std::string& description, const DateTime& added,
                    const std::string& assignee, const DateTime& deadline, const std::string& state,
                    const std::string& location);

        std::string toString() const override;
};
