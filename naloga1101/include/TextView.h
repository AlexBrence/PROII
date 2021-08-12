#pragma once

#include "View.h"

class TextView : public View {
    protected:
        std::string text;

    public:
        TextView(Position position, Size size, std::string text);
        ~TextView() override = default;

        void setText(const std::string& text);
        std::string getText() const;
        
        void draw() const override;
        void onClick() const override;
};


