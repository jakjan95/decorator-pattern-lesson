#pragma once

#include "Weapon.hpp"

class Rifle : public Weapon {
public:
    Rifle();
    std::string display() override;
    double damage() override;
};
