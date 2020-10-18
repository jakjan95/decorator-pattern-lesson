#pragma once

#include "Coffe.hpp"

class Decaf : public Coffe {
public:
    std::string getDescription() const override;
    double cost() const override;
    
};
