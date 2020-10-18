#pragma once

#include "Gun.hpp"

class GunWithSlincer : Gun {
public:
    std::string display() override {
        return "Gun with slincer";
    }

    double damage() override {
        return Gun::damage() + 5;
    }
};
