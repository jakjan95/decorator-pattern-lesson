#pragma once

#include <memory>

#include "Weapon.hpp"

class WeaponDecorator : public Weapon {
public:
    WeaponDecorator() = default;
    virtual ~WeaponDecorator() = default;

    WeaponDecorator(std::shared_ptr<Weapon> weapon)
        : weapon_{weapon} {}

private:
    std::shared_ptr<Weapon> weapon_;
};