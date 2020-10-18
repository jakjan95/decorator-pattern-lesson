#pragma once

#include "Americana.hpp"

class AmericanaWithWhip : public Americana {
public:
    std::string getDescription() const override {
        return "Americana with whip";
    }

    double cost() const override {
        return Americana::cost() + 0.15;
    }
};
