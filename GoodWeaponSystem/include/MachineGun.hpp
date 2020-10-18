#pragma once

#include "Weapon.hpp"

class MachineGun : public Weapon {
public:
    MachineGun(double power, size_t capacity, double accuracy);
    std::string display() override;
    double damage() override;

private:
    double power_;
    double accuracy_;
};
