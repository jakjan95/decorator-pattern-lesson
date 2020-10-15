#pragma once

#include "Gun.hpp"

class GunWithLaser : Gun {
public:
    std::string display() override {
        return "Gun with laser";
    }

    double damage() override {
        return power_ * accuracy_ + 3;
    }
};
