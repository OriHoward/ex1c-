
#include "mat.hpp"
#include "string.h"
#include <iostream>

string ariel::mat(int cols, int rows, char ch, char ch2) {
//    if (cols % 2 == 0 || rows % 2 == 0) {
//        throw "Mat size is always odd";
//    }
//    if (cols < 0 || rows < 0) {
//        throw "col and rows must be positive numbers";
//    }
    char **mat = new char *[cols];
    for (int i = 0; i < cols; ++i) {
        mat[i] = new char[rows];
    }
    int colStartInd = 0;
    int colEndInd = cols - 1
    int rowStartInd = 0;
    int rowEndInd = rows - 1;

    createMat(cols, rows, ch, ch2, mat, colStartInd, colEndInd, rowStartInd, rowEndInd);


    string ans = "";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            ans += mat[i][j];
        }
        ans += "\n";
    }

    return ans;
    return "";
}

bool **createMat(int cols, int rows, char ch, char ch2, char **mat, int colStartInd, int colEndInd, int rowStartInd,
                 int rowEndInd) {
    if (cols > 1 or rows > 1) {
        return true;
    }
    for (int i = colStartInd; i <=colEndInd; ++i) {
        mat[colStartInd][i] = ch;
        mat[i][colEndInd] = ch;
    }
    for (int i = rowStartInd; i <rowEndInd; ++i) {
        mat[][]
    }
}

