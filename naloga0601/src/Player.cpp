#include <iostream>

#include "Player.h"
#include "GameObject.h"

Player::Player(const float x, const float y, const float width, const float height, const std::string& name)
    : GameObject(x, y, width, height), name(name) {
}


void Player::draw() const { 
    std::cout << "\nx: " << x
              << "\ny: " << y
              << "\nwidth: " << width
              << "\nheight: " << height
              << "\nname: " << name 
              << "\n------------\n";
}


void Player::update() {
    x++;
}

