#include <iostream>
#include "cpp11support.h"

void cpp14support() {
    using namespace std;

    #if __cplusplus < 201402L
        #error The program needs C++14 compiler features
    #endif

    cout << __cplusplus << endl;
    cout << "C++14 detected"
         << endl
         << "__cplusplus = "
         << __cplusplus
         << endl;
}
