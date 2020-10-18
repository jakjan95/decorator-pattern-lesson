#pragma once

#include "WeaponDecorator.hpp"

class Slincer : public WeaponDecorator {
public:
    Slincer(std::shared_ptr<Weapon> weapon)
        :  WeaponDecorator(weapon) {}

    std::string display() override {
        return weapon_->display() + " with Slincer";
    }
    double damage() override {
        return weapon_->damage() * 1.1;
    }
};