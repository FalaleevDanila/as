//
// Created by danf2 on 25.09.2019.
//

#ifndef _MYMEMORYREAD_H
#define _MYMEMORYREAD_H


#include <chrono>
#include <time.h>
#include <cerrno>

class MyMemoryRead {
public:
    static clock_t read(size_t size);

    static void my_memcpy_s(void * __restrict dest, size_t destsz, const void * __restrict src, size_t count );
};

#endif //ДЗПОАССЕМБЛЕРУ_MYMEMORYREAD_H
