#pragma once

#include "Weapon.hpp"

class Rifle : public Weapon {
public:
    Rifle()
        : Weapon(35, 10, 1.0) {}

    std::string display() override {
        return "Rifle";
    }

    double damage() override {
        return power_ * accuracy_;
    }
};
