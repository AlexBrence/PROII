#pragma once

#include "TextView.h"

class Button : virtual public TextView {
    protected:
        bool enabled;

    public:
        Button(Position position, Size size, std::string text);
        ~Button() override = default;

        void setEnabled(const bool enabled);
        bool isEnabled() const;

        void draw() const override;
        void onClick() const override;
};


