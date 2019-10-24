//
// Created by danf2 on 25.09.2019.
//

#ifndef _PCMEMORYREAD_H
#define _PCMEMORYREAD_H


#include <chrono>
#include <cstring>
#include <time.h>
#include <cerrno>
#include <string.h>

class PcMemoryRead {
public:
    static clock_t read(size_t size);
};

#endif //_PCMEMORYREAD_H
