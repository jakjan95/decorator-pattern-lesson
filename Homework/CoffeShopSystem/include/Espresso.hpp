#pragma once

#include "Coffe.hpp"

class Espresso : public Coffe {
public:
    std::string getDescription() const override;
    double cost() const override;
};
