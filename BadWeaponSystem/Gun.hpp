#pragma once

#include "Weapon.hpp"

class Gun : public Weapon {
public:
    Gun()
        : Weapon(15, 5, 0.7) {}

    std::string display() override {
        return "Gun";
    }

    double damage() override {
        return power_ * accuracy_;
    }
};
