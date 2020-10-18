#include "Weapon.hpp"

Weapon::Weapon(size_t capacity)
    : capacity_{capacity} {}

void Weapon::fire() {
    if (capacity_ < 0) {
        std::cout << "You need to reload\n";
    } else {
        ammunitionAmount_--;
    }
}

void Weapon::reload() {
    ammunitionAmount_ = capacity_;
}