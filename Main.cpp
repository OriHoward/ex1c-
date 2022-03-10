#include "mat.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;
using namespace ariel;

int main() {
    cout << "Welcome to the rug shop !" << endl;
    int cols, rows;
    char firstSymbol, secondSymbol;
    cout << "Enter two odd numbers for the size of the rug: " << endl;
    cin >> cols >> rows;
    cout << "Enter two valid symbols for the rug design: " << endl;
    cin >> firstSymbol >> secondSymbol;
    cout << "Here is your rug, thanks for buying!" << endl;
    cout << "--------------" << endl;
    cout << mat(cols, rows, '%', '^') << endl;
    cout << "--------------" << endl;
    cout << "Random rugs for display" << endl;
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

}
