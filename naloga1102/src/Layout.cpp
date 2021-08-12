#include <iostream>
#include <memory>
#include <sstream>

#include "Layout.h"


Layout::Layout(Position position, Size size) : View(position, size) {
}


void Layout::addView(std::shared_ptr<View> view) {
    views.push_back(view);
}

std::shared_ptr<View> Layout::getView(const int position) const {
    return views[position];
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

std::string Layout::toXml() const {
    std::stringstream ss;
    ss << "<Layout>\n";
        for (const auto& v : views) {
            ss << v->toXml();
        }
    ss << "\n</Layout>";
    return ss.str();
}
