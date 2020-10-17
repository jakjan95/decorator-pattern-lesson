#pragma once

#include "Weapon.hpp"

class Gun : public Weapon {
public:
    Gun(double power, size_t capacity, double accuracy)
        : power_{power}, accuracy_{accuracy}, Weapon(capacity) {}

    std::string display() override {
        return "Gun";
    }

    double damage() override {
        return power_ * accuracy_;
    }

private:
    double power_;
    double accuracy_;
};
