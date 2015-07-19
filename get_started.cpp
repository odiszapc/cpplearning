/**
 * To build this CMAKE run commands as follows:
 * /usr/lib64/ccache/c++    -Wall -std=c++11   -o CMakeFiles/cpplearning.dir/main.cpp.o -c /home/odiszapc/cppprojects/cpplearning/main.cpp
 * /usr/lib64/ccache/c++    -Wall -std=c++11   CMakeFiles/cpplearning.dir/main.cpp.o  -o cpplearning -rdynamic
 *
 * Or:
 * gcc -Wall -std=c++11 -o main.o -c main.cpp
 * c++ main.o -o cpplearning -rdynamic
 *
 * Or with ccache:
 * c++ --std=c++14 main.cpp -o cpplearning
 *
 * Or directly with gcc:
 * gcc -Wall -std=c++11 -lstdc++ -o cpplearning main.cpp
 *
 * Or with g++:
 * g++ -Wall -std=c++14 main.cpp
 *
 * @brief main
 * @return
 */

#include <iostream>

void get_started() {
    using namespace std;
    int a = 1;
    auto b = a;
    cout << "Hello World!" << endl;
}
