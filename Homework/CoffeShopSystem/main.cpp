#include <iostream>
#include <memory>

#include "Americana.hpp"
#include "AmericanaWithSoy.hpp"

int main() {
    auto americana = std::make_unique<Americana>();
    std::cout << americana->getDescription() << " cost : " << americana->cost() << '\n';

    auto americanaWithSoy = std::make_unique<AmericanaWithSoy>();
    std::cout << americanaWithSoy->getDescription() << " cost : " << americanaWithSoy->cost() << '\n';

    // Example of system use for homework
    // std::unique_ptr<Coffe> americanWithSoy = std::make_unique<Americana>();
    // americanaWithSoy = std::make_unique<Soy>(std::move(americanaWithSoy));
    // std::cout << americanaWithSoy->getDescription() << " cost : " << americanaWithSoy->cost() << '\n';

    // make espressoWithDoubleMilkAndWhip
    return 0;
}
