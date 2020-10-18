#pragma once

#include "Weapon.hpp"

class Gun : public Weapon {
public:
    Gun(double power, size_t capacity, double accuracy);
    std::string display() override;
    double damage() override;
private:
    double power_;
    double accuracy_;
};
