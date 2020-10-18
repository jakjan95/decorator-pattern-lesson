#include <iostream>
#include <memory>

#include "Americana.hpp"
#include "AmericanaWithSoy.hpp"

int main() {
    auto americana = std::make_unique<Americana>();
    std::cout << americana->getDescription() << " cost : " << americana->cost() << '\n';

    auto americanaWithSoy = std::make_unique<AmericanaWithSoy>();
    std::cout << americanaWithSoy->getDescription() << " cost : " << americanaWithSoy->cost() << '\n';

    return 0;
}
