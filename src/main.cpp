#include <iostream>
#include "Calculator.h"
// #include "visibility_control.hpp"
int main() {
    Calculator calc;
    std::cout << "3 + 4 = " << calc.add(3, 4) << std::endl;
    std::cout << "3 - 4 = " << calc.subtract(3, 4) << std::endl;
    std::cout << "3 * 4 = " << calc.multiply(3, 4) << std::endl;
    std::cout << "12 / 4 = " << calc.divide(12, 4) << std::endl;

    try {
        std::cout << "3 / 0 = " << calc.divide(3, 0) << std::endl;
    } catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;
    }
    
    return 0;
}
