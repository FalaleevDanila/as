//
// Created by danf2 on 25.09.2019.
//

#include "../includes/results.h"

void Result::head() {
    cout << "\t\t\t\t\t Results:" << endl << endl;
    cout << " ||      PC results      ||      My results      ||      Successful??? " << endl;
}

void Result::resultWindow(clock_t pcFunctionResult,  clock_t myFunctionResult) {
    cout << "           " << pcFunctionResult << "                     " << myFunctionResult
         << ((pcFunctionResult < myFunctionResult) ? "                          No" : "                         Yes")
         << endl;
}