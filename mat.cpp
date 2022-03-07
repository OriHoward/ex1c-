
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
    char **mat = new char *[cols];
    for (int i = 0; i < cols; ++i) {
        mat[i] = new char[rows];
    }
    int colStartInd = 0;
    int colEndInd = cols - 1;
    int rowStartInd = 0;
    int rowEndInd = rows - 1;

    createMat(cols, rows, ch, ch2, mat, colStartInd, colEndInd, rowStartInd, rowEndInd);

    string ans = "";

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            ans += mat[i][j];
        }
        ans += "\n";
    }
    for (int i = 0; i < cols; ++i) {
        delete[] mat[i];
    }
    delete[] mat;

    return ans;
}


bool
ariel::createMat(int cols, int rows, char ch, char ch2, char **mat, int colStartInd, int colEndInd, int rowStartInd,
                 int rowEndInd) {
    if (colStartInd == colEndInd) {
        for (int i = rowStartInd; i <= rowEndInd; ++i) {
            mat[i][colStartInd] = ch;
        }
        return true;
    }
    if (rowStartInd == rowEndInd) {
        for (int i = colStartInd; i <= colEndInd; ++i) {
            mat[rowStartInd][i] = ch;
        }
        return true;
    }
    for (int i = colStartInd; i <= colEndInd; ++i) {
        mat[rowStartInd][i] = ch;
        mat[rowEndInd][i] = ch;
    }
    for (int i = rowStartInd; i <= rowEndInd; ++i) {
        mat[i][colStartInd] = ch;
        mat[i][colEndInd] = ch;
    }
    colStartInd += 1;
    colEndInd -= 1;
    rowStartInd += 1;
    rowEndInd -= 1;
    return createMat(cols, rows, ch2, ch, mat, colStartInd, colEndInd, rowStartInd, rowEndInd);
}

//char ariel::swap(char currentChar, char ch, char ch2) {
//    if (currentChar == ch) {
//        currentChar = ch2;
//    } else {
//        currentChar = ch;
//    }
//    return currentChar;
//}
//
//string ariel::mat(int cols, int rows, char ch, char ch2) {
//    if (cols % 2 == 0 || rows % 2 == 0) {
//        throw "Mat size is always odd";
//    }
//    if (cols < 0 || rows < 0) {
//        throw "col and rows must be positive numbers";
//    }
//    int colStartInd = 0;
//    int colEndInd = cols - 1;
//    int rowStartInd = 0;
//    int rowEndInd = rows - 1;
//
//    char currentChar = ' ';
//    char **mat = new char *[cols];
//    for (int i = 0; i < cols; ++i) {
//        mat[i] = new char[rows];
//    }
//    while (colStartInd < colEndInd && rowStartInd < rowEndInd) {
//        swap(currentChar, ch, ch2);
//        for (int i = colStartInd; i <= colEndInd; ++i) {
//            mat[rowStartInd][i] = currentChar;
//            mat[rowEndInd][i] = currentChar;
//        }
//        for (int i = rowStartInd; i <= rowEndInd; ++i) {
//            mat[i][colStartInd] = currentChar;
//            mat[i][colEndInd] = currentChar;
//        }
//        colStartInd++;
//        colEndInd--;
//        rowStartInd++;
//        rowEndInd--;
//    }
//    if (colStartInd < colEndInd) {
//        for (int i = colStartInd; i <= colEndInd; ++i) {
//            mat[rowStartInd][i] = currentChar;
//        }
//    } else if (rowStartInd < rowEndInd) {
//        for (int i = rowStartInd; i <= rowEndInd; ++i) {
//            mat[i][colStartInd] = currentChar;
//        }
//    }
//    string ans = "";
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            ans += mat[i][j];
//        }
//        ans += "\n";
//    }
//    for (int i = 0; i < cols; ++i) {
//        delete[] mat[i];
//    }
//    delete[] mat;
//    return ans;
//}
