#pragma once

#include "Button.h"
#include "ImageView.h"

class ImageButton : public Button, public ImageView {
    public:
        ImageButton(Position position, Size size, std::string text, std::string imgPath);
        ~ImageButton() override = default;

        void draw() const override;
        void onClick() const override;
};


