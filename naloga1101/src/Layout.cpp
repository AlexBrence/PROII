#include <iostream>
#include <memory>
#include "Layout.h"

void Layout::addView(std::shared_ptr<View> view) {
    views.push_back(view);
}

std::shared_ptr<View> Layout::getView(const int position) const {
    return views[position - 1];
}

int Layout::size() const {
    return views.size();
}

void Layout::draw() const {
    for (const auto& v : views) {
        v->draw();
        std::cout << "\n";
    }
}
