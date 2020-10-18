#pragma once

#include "Coffe.hpp"

class Americana : public Coffe {
public:
    std::string getDescription() const override;
    double cost() const override;
};
