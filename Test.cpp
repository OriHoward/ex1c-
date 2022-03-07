#include "mat.hpp"
#include <string>
#include <algorithm>
#include "doctest.h"

using namespace ariel;


TEST_CASE ("Bad input - cols must be odd") {
    CHECK_THROWS(mat(10, 5, '$', '%'));
    CHECK_THROWS(mat(8, 3, '$', '%'));
    CHECK_THROWS(mat(4, 15, '$', '%'));
}

TEST_CASE ("Bad input - rows must be odd") {
    CHECK_THROWS(mat(9, 2, '$', '%'));
    CHECK_THROWS(mat(11, 8, '$', '%'));
    CHECK_THROWS(mat(15, 4, '$', '%'));
}

TEST_CASE ("Bad input - cols and rows must be odd") {
    CHECK_THROWS(mat(10, 8, '$', '%'));
    CHECK_THROWS(mat(4, 2, '$', '%'));
    CHECK_THROWS(mat(12, 6, '$', '%'));
}

TEST_CASE ("Bad input - only positive cols are allowed") {
    CHECK_THROWS(mat(-2, 3, '@', '#'));
    CHECK_THROWS(mat(-5, 3, '@', '#'));
    CHECK_THROWS(mat(-7, 9, '@', '#'));
}

TEST_CASE ("Bad input - only positive rows are allowed") {
    CHECK_THROWS(mat(7, -3, '@', '#'));
    CHECK_THROWS(mat(11, -5, '@', '#'));
    CHECK_THROWS(mat(3, -9, '@', '#'));
}

TEST_CASE ("Bad input - only positive rows and cols are allowed") {
    CHECK_THROWS(mat(-7, -3, '@', '#'));
    CHECK_THROWS(mat(-11, -5, '@', '#'));
    CHECK_THROWS(mat(-3, -13, '@', '#'));
}

//TEST_CASE ("Bad input - cols and rows must be an integer number") {
//    CHECK_THROWS(mat('b', 'c', '@', '#'));
//    CHECK_THROWS(mat(5, 'h', '@', '#'));
//    CHECK_THROWS(mat('k', 13, '@', '#'));
//}

TEST_CASE ("Good output") {
            CHECK(mat(3, 1, '@', '#') == "@@@");
            CHECK(mat(1, 3, '%', '-') == "%\n%\n%");
            CHECK(mat(9, 7, '@', '-') == "@@@@@@@@@\n"
                                         "@-------@\n"
                                         "@-@@@@@-@\n"
                                         "@-@---@-@\n"
                                         "@-@@@@@-@\n"
                                         "@-------@\n"
                                         "@@@@@@@@@");
}

TEST_CASE ("Bad output") {
            CHECK(mat(3, 3, '+', '-') != "+++\n---");
            CHECK(mat(5, 5, '+', '-') != " ");
            CHECK(mat(7, 1, '+', '-') != "-------");
}



