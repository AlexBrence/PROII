#pragma once

#include "Layout.h"
class LinearLayout : public Layout {
    public:
        LinearLayout(Position position, Size size);
        ~LinearLayout() override = default;
        void draw() const override;
};


