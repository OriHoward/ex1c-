#ifndef PRACTICE_MAT_HPP
#define PRACTICE_MAT_HPP

#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

namespace ariel {
    string mat(int, int, char, char);

    string buildStr(vector<vector<char>>, int, int);

    string handleSingleCol(int, char);

    string handleSingleRow(int, char);

    bool checkInput(int, int, char, char);
}
#endif //PRACTICE_MAT_HPP
//dsada