#include <iostream>
#include "includes/myMemoryRead.h"
#include "includes/pcMemoryRead.h"
#include "includes/results.h"

int main() {
    Result::head();
    while (true) {
        std::cout << "Hello, how many Kb do you want to use?" << std::endl;
        size_t size = 0;

        std::cin >> size;
        if (std::cin.fail()) {
            std::cout << " Error";
        } else if (size <= 0) {
            break;
        } else {

            Result::resultWindow(PcMemoryRead::read(size), MyMemoryRead::read(size));

        }
    }
    return 0;
}