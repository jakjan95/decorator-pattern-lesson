#pragma once

#include <string>

class Coffe {
public:
    virtual ~Coffe() = default;
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
};
