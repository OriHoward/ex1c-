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

TEST_CASE ("Bad input - symbol can't be \\n") {
    CHECK_THROWS(mat(11, 17, '\n', '-'));
    CHECK_THROWS(mat(7, 3, '@', '\n'));
    CHECK_THROWS(mat(5, 13, '\n', '\n'));
}

TEST_CASE ("Bad input - symbol can't be \\r") {
    CHECK_THROWS(mat(11, 17, '\r', '-'));
    CHECK_THROWS(mat(7, 3, '@', '\r'));
    CHECK_THROWS(mat(5, 13, '\r', '\r'));
}

TEST_CASE ("Bad input - symbol can't be space") {
    CHECK_THROWS(mat(11, 17, ' ', '-'));
    CHECK_THROWS(mat(7, 3, '@', ' '));
    CHECK_THROWS(mat(5, 13, ' ', ' '));
}

TEST_CASE ("Bad input - symbol can't be \\t") {
    CHECK_THROWS(mat(11, 17, '\t', '-'));
    CHECK_THROWS(mat(7, 3, '@', '\t'));
    CHECK_THROWS(mat(5, 13, '\t', '\t'));
}




