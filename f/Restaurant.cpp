#include "Restaurant.h"

void Restaurant::setName(std::string& name) {
    this->name = name;
}

void Restaurant::setType(std::string& type) {
    this->type = type;
}

void Restaurant::setScore(float& score) {
    this->score = score;
}

std::string Restaurant::toCSV() {
    return name + "," + type + "," + std::to_string(score);
}
