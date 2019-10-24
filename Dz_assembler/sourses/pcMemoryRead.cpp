//
// Created by danf2 on 25.09.2019.
//


#include <numeric>
#include <cstring>
#include "../includes/pcMemoryRead.h"

clock_t PcMemoryRead::read(size_t size) {


    clock_t start = clock();
    for (size_t i = 0; i < 10000; i++ ) {
        char *str1 = new char[size];
        std::iota(str1, str1 + size, 0);
        char *str2 = new char[size];
        memcpy(str2, str1, size);
        delete [] str2;
        delete [] str1;
    }
    clock_t end = clock();
    return (end - start);

}