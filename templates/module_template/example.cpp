/* Shell (example.cpp)
 * A simple shell made in C++
 * Github: https://www.github.com/lewisevans2007/shell
 * Licence: GNU General Public License v3.0
 * By: Lewis Evans
 *
 * Shell example module source file
 */

#include <iostream>
#include <string>

#include "config/config.h"
#include "printsh.h"

/**
 * example_function - Prints hello [arg] using the printsh
 * function and returns 0
 */
int example_function(std::string args) {
    printsh("hello " + args);
    return 0;
}