/* Shell (help.cpp)
 * A simple shell made in C++
 * Github: https://www.github.com/awesomelewis2007/shell
 * Licence: GPL-3.0
 * By: Lewis Evans
 *
 * Help command source file
 */

#include <iostream>

/**
 * Prints the help message
 * @returns: void
 */
void help() {
    std::cout << "awesomelewis2007's shell help" << std::endl;
    std::cout << "help - show this help message" << std::endl;
    std::cout << "history - show the shell history" << std::endl;
    std::cout << "exit - exit the shell" << std::endl;
}