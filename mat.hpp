#ifndef PRACTICE_MAT_HPP
#define PRACTICE_MAT_HPP

#include <iostream>
#include <stdexcept>
#include "string.h"

using namespace std;

namespace ariel {
    string mat(int, int, char, char);

    bool createMat(int cols, int rows, char ch, char ch2, char **mat, int colStartInd, int colEndInd, int rowStartInd,
                     int rowEndInd);
//    char swap(char, char, char);
}
#endif //PRACTICE_MAT_HPP
//dsada