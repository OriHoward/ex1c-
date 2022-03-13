#include "mat.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
using namespace ariel;

int main() {
    /**
     * generates random rug
     */
    vector<char> symbols(94);
    int firstSymbolInd;
    int secondSymbolInd;
    int randomCol;
    int randomRow;
    for (int j = 0, i = 33; i < 127; ++i, j++) {
        symbols[j] = i;
    }
    cout << "------------Generating Random Rugs------------" << endl;
    srand((time(NULL)));
    for (int i = 0; i < 10; ++i) {
        firstSymbolInd = rand() % 94;
        secondSymbolInd = rand() % 94;
        randomCol = rand() % 31;
        randomRow = rand() % 31;
        randomCol = (randomCol % 2 == 0) ? randomCol + 1 : randomCol;
        randomRow = (randomRow % 2 == 0) ? randomRow + 1 : randomRow;
        cout << "--------------------------------------------" << endl;
        cout << mat(randomCol, randomRow, symbols[firstSymbolInd], symbols[secondSymbolInd]) << endl;
    }
    cout << "------------Finished !------------" << endl;

    cout << "Basics rugs for display" << endl;
    cout << "-------------------------------" << endl;
    cout << "Basic rug" << endl;
    cout << "--------------" << endl;
    cout << mat(9, 7, '@', '-') << endl;
    cout << "--------------" << endl;
    cout << "Beautiful 7 by 7 rug" << endl;
    cout << "--------------" << endl;
    cout << mat(7, 7, '+', '-') << endl;
    cout << "--------------" << endl;
    cout << "Is it even a rug?" << endl;
    cout << "--------------" << endl;
    cout << mat(1, 1, '@', '*') << endl;
    cout << "--------------" << endl;
    cout << "One vertical line rug" << endl;
    cout << "--------------" << endl;
    cout << mat(1, 11, '*', '@') << endl;
    cout << "--------------" << endl;
    cout << "One horizontal line rug" << endl;
    cout << "--------------" << endl;
    cout << mat(11, 1, '^', '*') << endl;
    cout << "--------------" << endl;
    cout << "Huge sexy rug" << endl;
    cout << "--------------" << endl;
    cout << mat(55, 55, '%', '*') << endl;
    cout << "Welcome to the rug shop !" << endl;
    int cols, rows;
    char firstSymbol, secondSymbol;
    cout << "Enter two odd numbers for the size of the rug: " << endl;
    cin >> cols >> rows;
    cout << "Enter two valid symbols for the rug design: " << endl;
    cin >> firstSymbol >> secondSymbol;
    cout << "Here is your rug, thanks for buying!" << endl;
    cout << "--------------" << endl;
    try {
        cout << mat(cols, rows, '%', '^') << endl;
    } catch (exception &ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
    cout << "--------------" << endl;
}
