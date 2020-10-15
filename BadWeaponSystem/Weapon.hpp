#pragma once

#include <iostream>
#include <string>

class Weapon {
public:
    virtual ~Weapon() = default;
    Weapon(double power, size_t capacity, double accuracy)
        : power_{power}, capacity_{capacity}, accuracy_{accuracy} {}

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
    double power_;
    size_t capacity_;
    size_t ammunitionAmount_{capacity_};
    double accuracy_;
};
