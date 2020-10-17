#pragma once

#include <iostream>
#include <string>

class Weapon {
public:
    Weapon() = default;
    virtual ~Weapon() = default;

    Weapon(size_t capacity)
        : capacity_{capacity} {}

    virtual std::string display() = 0;
    virtual double damage() = 0;

    virtual void fire() final {
        if (capacity_ < 0) {
            std::cout << "You need to reload\n";
        } else {
            ammunitionAmount_--;
        }
    }

    virtual void reload() final {
        ammunitionAmount_ = capacity_;
    }

protected:
    size_t capacity_;
    size_t ammunitionAmount_{capacity_};
};
