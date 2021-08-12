#pragma once

#include <memory>
#include <vector>
#include "View.h"

class Layout {
    private:
        std::vector<std::shared_ptr<View>> views;

    public:
        void addView(std::shared_ptr<View> view);
        std::shared_ptr<View> getView(const int position) const;
        int size() const;
        void draw() const;
};
