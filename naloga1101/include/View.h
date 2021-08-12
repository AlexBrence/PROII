#pragma once

#include "ClickListener.h"
#include "Position.h"
#include "Size.h"


class View : public ClickListener {
    protected:
        Position position;
        Size size;
        bool visible;

    public:
        View(Position position, Size size);
        virtual ~View() = default;

        void setPosition(const float x, const float y);
        void setSize(const float width, const float height, const Unit& unit);
        void setVisible(const bool visible);

        Position getPosition() const;
        Size getSize() const;
        bool isVisible() const;

        virtual void draw() const;
        void onClick() const override;
};


