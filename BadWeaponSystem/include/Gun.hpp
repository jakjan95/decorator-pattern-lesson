#pragma once

#include "Weapon.hpp"

class Gun : public Weapon {
public:
    Gun();

    std::string display() override;

    double damage() override;
};
