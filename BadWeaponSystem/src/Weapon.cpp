#include "Weapon.hpp"

Weapon::Weapon(double power, size_t capacity, double accuracy)
    : power_{power}, capacity_{capacity}, accuracy_{accuracy} {}

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