
#include "mat.hpp"
#include <iostream>
#include <vector>

string ariel::mat(int cols, int rows, char firstSymbol, char secondSymbol) {
//    if (!checkInput(cols, rows)) {
//        throw "Bad input";
//    }
    if (cols == 1) { return handleSingleCol(rows, firstSymbol); };
    if (rows == 1) { return handleSingleRow(cols, firstSymbol); };

    int colStartInd = 0;
    int colEndInd = cols - 1;
    int rowStartInd = 0;
    int rowEndInd = rows - 1;
    char currentChar = secondSymbol;
    vector <vector<char >> rugMat(rows, vector<char>(cols));
    while (colStartInd < colEndInd && rowStartInd < rowEndInd) {
        currentChar = (currentChar == firstSymbol) ? secondSymbol : firstSymbol;
        for (int i = colStartInd; i <= colEndInd; ++i) {
            rugMat[rowStartInd][i] = currentChar;
            rugMat[rowEndInd][i] = currentChar;
        }
        for (int i = rowStartInd; i <= rowEndInd; ++i) {
            rugMat[i][colStartInd] = currentChar;
            rugMat[i][colEndInd] = currentChar;
        }
        colStartInd++;
        colEndInd--;
        rowStartInd++;
        rowEndInd--;
    }
    currentChar = (currentChar == firstSymbol) ? secondSymbol : firstSymbol;
    if (colStartInd < colEndInd) {
        for (int i = colStartInd; i <= colEndInd; ++i) {
            rugMat[rowStartInd][i] = currentChar;
        }
    }
    if (rowStartInd < rowEndInd) {
        for (int i = rowStartInd; i <= rowEndInd; ++i) {
            rugMat[i][colStartInd] = currentChar;
        }
    }
    return buildStr(rugMat, cols, rows);
}

string ariel::buildStr(vector <vector<char>> rugMat, int cols, int rows) {
    string ans;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            ans += rugMat[i][j];
        }
        ans += "\n";
    }
    return ans;
}

bool ariel::checkInput(int cols, int rows) {
    return (cols % 2 == 0 || rows % 2 == 0 || cols < 0 || rows < 0);
}

string ariel::handleSingleCol(int rows, char firstSymbol) {
    string ans;
    for (int i = 0; i < rows; ++i) {
        ans += firstSymbol;
        if (i != rows - 1) {
            ans += "\n";
        }
    }
    return ans;

}

string ariel::handleSingleRow(int cols, char firstSymbol) {
    string ans;
    for (int i = 0; i < cols; ++i) {
        ans += firstSymbol;
    }
    return ans;
}
