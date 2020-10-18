#pragma once

#include "Americana.hpp"

class AmericanaWithMilk : public Americana {
public:
    std::string getDescription() const override {
        return "Americana with milk";
    }

    double cost() const override {
        return Americana::cost() + 0.25;
    }
};
