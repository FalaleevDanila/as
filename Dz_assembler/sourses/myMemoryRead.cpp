//
// Created by danf2 on 25.09.2019.
//


#include <numeric>
#include "../includes/myMemoryRead.h"

clock_t MyMemoryRead::read(size_t size) {

    clock_t start = clock();
    for(size_t i = 0; i < 10000; i++) {
        char *str1 = new char[size];
        std::iota(str1, str1 + size, 0);
        auto address = reinterpret_cast<uintptr_t >(str1);
        char *str2 = new char[size];

        // ............
        MyMemoryRead::my_memcpy_s(str2,size,str1,size);
        delete [] str2;
        delete [] str1;
    }
    clock_t end = clock();
    return (end - start);
}

void MyMemoryRead::my_memcpy_s(void *dest, size_t destsz, const void *src, size_t count) {
    auto dest_pointer = reinterpret_cast<uint8_t *>(dest);
    auto str_pointer = reinterpret_cast<const uint8_t *>(src);
    for( size_t i = 0; i < destsz; ++i ){
        dest_pointer[i] = str_pointer[i];
    }

}

