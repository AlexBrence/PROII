#include "LinearLayout.h"
#include <iostream>
#include <vector>
#include <memory>

LinearLayout::LinearLayout(Position position, Size size) : Layout(position, size) {
}


void LinearLayout::draw() const {
    std::vector<std::shared_ptr<View>> sortedViews = views;

    std::sort(sortedViews.begin(), sortedViews.end(), 
            [&](const std::shared_ptr<View> a, const std::shared_ptr<View> b) {
                return a->getPosition().getX() < b->getPosition().getX();
            });

    for (const auto& sv : sortedViews) {
        sv->draw();
        std::cout << "\n";
    } 
}
