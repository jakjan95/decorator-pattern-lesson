#pragma once

#include "Weapon.hpp"

class MachineGun : public Weapon {
public:
    MachineGun();
    std::string display() override;
    double damage() override;
};
