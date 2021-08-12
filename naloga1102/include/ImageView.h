#pragma once

#include "View.h"

class ImageView : virtual public View {
    protected:
        std::string imgPath;

    public:
        ImageView(Position position, Size size, std::string imgPath);
        ~ImageView() override = default;

        void setImgPath(const std::string& imgPath);
        std::string getImgPath() const;

        void draw() const override;
        std::string xmlString() const override;
        std::string toXml() const override;
};


