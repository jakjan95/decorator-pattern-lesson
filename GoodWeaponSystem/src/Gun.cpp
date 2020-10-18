#include "Gun.hpp"

Gun::Gun(double power, size_t capacity, double accuracy)
    : power_{power}, accuracy_{accuracy}, Weapon(capacity) {}

std::string Gun::display() {
    return "Gun";
}

double Gun::damage() {
    return power_ * accuracy_;
}