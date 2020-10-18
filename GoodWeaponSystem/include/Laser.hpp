#pragma once

#include "WeaponDecorator.hpp"

class Laser : public WeaponDecorator {
public:
    Laser(std::shared_ptr<Weapon> weapon)
        : WeaponDecorator(weapon) {}

    std::string display() override {
        return weapon_->display() + " with Laser";
    }
    double damage() override {
        return weapon_->damage() + 5;
    }
};