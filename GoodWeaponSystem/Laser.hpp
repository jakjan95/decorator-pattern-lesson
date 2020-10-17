#pragma once

#include "WeaponDecorator.hpp"

class Laser : WeaponDecorator {
public:
    Laser(std::shared_ptr<Weapon> weapon)
        : weapon_{weapon} {}

    std::string display() override {
        return weapon_->display() + " with Laser";
    }
    double damage() override {
        return weapon_->damage() + 5;
    }

private:
    std::shared_ptr<Weapon> weapon_;
};