#include <string>
#include "Monster.h"

// Setters
void Monster::setName(const std::string name) {
    this->name = name;
}

void Monster::setType(const std::string newType) {
    type = newType;
}

void Monster::setColor(const std::string newColor) {
    color = newColor;
}

void Monster::setEyes(const int newEyes) {
    eyes = newEyes;
}

void Monster::setArms(const int newArms) {
    arms = newArms;
}

void Monster::setLegs(const int newLegs) {
    legs = newLegs;
}

// Getters
std::string Monster::getName() const {
    return name;
}

std::string Monster::getType() const {
    return type;
}

std::string Monster::getColor() const {
    return color;
}

int Monster::getEyes() const {
    return eyes;
}

int Monster::getArms() const {
    return arms;
}

int Monster::getLegs() const {
    return legs;
}
