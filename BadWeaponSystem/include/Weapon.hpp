#pragma once

#include <iostream>
#include <string>

class Weapon {
public:
    virtual ~Weapon() = default;
    Weapon() = default;
    Weapon(double power, size_t capacity, double accuracy);

    virtual std::string display() = 0;
    virtual double damage() = 0;
    virtual void fire() final;
    virtual void reload() final;

protected:
    double power_;
    size_t capacity_;
    size_t ammunitionAmount_{capacity_};
    double accuracy_;
};
