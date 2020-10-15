#pragma once

#include "Weapon.hpp"

class MachineGun : public Weapon {
public:
    MachineGun()
        : Weapon(15, 5, 0.5) {}

    std::string display() override {
        return "Machine Gun";
    }

    double damage() override {
        return power_ * accuracy_;
    }
};
