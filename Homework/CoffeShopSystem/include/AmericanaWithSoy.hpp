#pragma once

#include "Americana.hpp"

class AmericanaWithSoy : public Americana {
public:
    std::string getDescription() const override {
        return "Americana with soy milk";
    }

    double cost() const override {
        return Americana::cost() + 0.20;
    }
};
