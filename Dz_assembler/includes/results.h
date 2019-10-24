//
// Created by danf2 on 25.09.2019.
//

#ifndef DZ_ASSEMBLER_RESULTS_H
#define DZ_ASSEMBLER_RESULTS_H

#include <iostream>
#include <time.h>

using std::cout;
using std::endl;

class Result {
public:
    static void head();

    static void resultWindow( clock_t pcFunctionResult, clock_t myFunctionResult);
};


#endif //DZ_ASSEMBLER_RESULTS_H
