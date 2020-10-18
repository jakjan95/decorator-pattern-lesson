#pragma once

#include "Gun.hpp"

class GunWithSlincerAndLaser : Gun {
public:
    std::string display() override {
        return "Gun with slincer and laser";
    }

    double damage() override {
        return Gun::damage() * 1.1 + 5;
    }
};
