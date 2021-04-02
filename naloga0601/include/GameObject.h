#pragma once


class GameObject {
    protected:
        float x, y, width, height;

    public:
        GameObject(const float x, const float y, const float width, const float height);
        virtual ~GameObject() = default;

        virtual void draw() const = 0;
        virtual void update() = 0;
};


