
#include "mat.hpp"
#include "string.h"
#include <iostream>

string ariel::mat(int cols, int rows, char ch, char ch2) {
    if (cols % 2 == 0 || rows % 2 == 0) {
        throw "Mat size is always odd";
    }
    if (cols < 0 || rows < 0) {
        throw "col and rows must be positive numbers";
    }
    //    if (!isdigit(cols) || !isdigit(rows)) {
//        throw "cols and rows must be integer";
//        std:cout<<"aa";
//    }

//    char **mat = new char *[cols];
//    for (int i = 0; i < cols; ++i) {
//        mat[i] = new char[rows];
//    }
//    int curr_cols = cols;
//    int curr_rows = rows;
//    bool firstChar = true;
//    int currentChar;
//    while (curr_cols > 1 and curr_rows > 1) {
//        if (firstChar) {
//            currentChar = ch;
//            firstChar = false;
//        } else {
//            currentChar = ch2;
//            firstChar = true;
//        }
//        for (int i = 0; i < cols; ++i) {
//            mat[0][i] = currentChar;
//            mat[rows - 1][i] = currentChar;
//        }
//        for (int i = 1; i < rows; ++i) {
//            mat[i][0] = currentChar;
//            mat[i][cols - 1];
//        }
//        curr_cols-=2;
//        curr_rows-=2;
//    }
//
//    for (int i = 0; i < cols; ++i) {
//        for (int j = 0; j < rows; ++j) {
//            mat[i][j] = '@';
//            std::cout << mat[i][j];
//        }
//        std::cout << "\n";
//    }
//    for (int p = 0; p < 9; ++p) {
//        delete[] mat[p];
//    }
//    delete[] mat;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std:cout<<mat[i][j];
        }

    }

    return mat;
}


