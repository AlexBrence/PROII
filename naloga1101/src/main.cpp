#include <iostream>
#include <memory>

#include "Button.h"
#include "ImageButton.h"
#include "Layout.h"

int main() {
    std::shared_ptr<Layout> layout = std::make_shared<Layout>();
    layout->addView(std::make_shared<TextView>(TextView(Position(5.f, 4.f), Size(10.f, 10.5f, Unit::px), "TV1")));
    layout->addView(std::make_shared<Button>(Button(Position(2.3f, 2.9f), Size(5.f, 5.f, Unit::dp), "Button")));
    layout->addView(std::make_shared<ImageView>(ImageView(Position(2.f, 2.4f), Size(120.f, 190.f, Unit::px), "/home/alex/Pictures/logo.png")));
    layout->addView(std::make_shared<TextView>(TextView(Position(1.3f, 4.6f), Size(200.f, 150.5f, Unit::px), "TV2")));
    layout->addView(static_cast<std::shared_ptr<Button>>(std::make_shared<ImageButton>(ImageButton(Position(120.f, 130.f), Size(120.f, 70.f, Unit::px), "Confirm", "/home/alex/Pictures/confirm.png"))));
    layout->addView(static_cast<std::shared_ptr<ImageView>>(std::make_shared<ImageButton>(ImageButton(Position(20.f, 230.f), Size(20.f, 270.f, Unit::px), "Decline", "/home/alex/Pictures/decline.png"))));
    layout->getView(3)->setVisible(false);
    layout->draw();


    std::cout << "* onClick() method *\n";
    for (int i = 1; i <= 6; i++) {
        layout->getView(i)->onClick();
    }


    return 0;
}
