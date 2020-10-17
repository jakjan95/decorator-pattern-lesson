#pragma once

#include <memory>

#include "Weapon.hpp"

class WeaponDecorator : public Weapon {
public:
    WeaponDecorator() = default;

    WeaponDecorator(std::shared_ptr<Weapon> weapon)
        : weapon_{weapon} {}

    virtual ~WeaponDecorator() = default;

private:
    std::shared_ptr<Weapon> weapon_;
};