#pragma once

#include <memory>
#include <vector>
#include "View.h"

class Layout : public View {
    protected:
        std::vector<std::shared_ptr<View>> views;

    public:
        Layout(Position position, Size size);
        ~Layout() override = default;
        void addView(std::shared_ptr<View> view);
        std::shared_ptr<View> getView(const int position) const;
        int size() const;
        void draw() const override;
        std::string toXml() const override;
};
