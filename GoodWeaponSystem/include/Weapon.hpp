#pragma once

#include <iostream>
#include <string>

class Weapon {
public:
    Weapon() = default;
    virtual ~Weapon() = default;
    Weapon(size_t capacity);

    virtual std::string display() = 0;
    virtual double damage() = 0;
    virtual void fire() final;
    virtual void reload() final;

protected:
    size_t capacity_;
    size_t ammunitionAmount_{capacity_};
};
