/* Shell (main.cpp)
 * A simple shell made in C++
 * Github: https://www.github.com/awesomelewis2007/shell
 * License: GPL-3.0
 * By: Lewis Evans
 *
 * Shell main file
*/

#include <iostream>
#include <string>
#include <unistd.h>
#include <cstring>

#include "colour.h"

#include "command.h"
#include "name.h"
#include "dir.h"
#include "config/config.h"

/* Define console colours */
ascii_colours::normal normal;
ascii_colours::bold bold;


/**
 * parse version
 * @returns: The version as a string
*/
std::string parse_version(){
    std::string version = std::to_string(VERSION_MAJOR) + "." + std::to_string(VERSION_MINOR) + "." + std::to_string(VERSION_PATCH) + " " + VERSION_NAME;
    return version;
}

/**
 * Prints the welcome message
 * @returns: void
 */
void print_welcome(){
    if (SHOW_WELCOME_MESSAGE == true){
        std::cout << bold.green << "Welcome to " << NAME << " " << parse_version() << bold.reset << std::endl;
        if (CUSTOM_WELCOME_MESSAGE == false){
            std::cout << "Type 'help' for a list of commands" << std::endl;
        } else {
            std::cout << CUSTOM_WELCOME_MESSAGE_TEXT << std::endl;
        }
    }
}

/**
 * Main function
 * @param argc: int
 * @param argv: char*
 * @returns: int
 */
int main(int argc, char *argv[]) {
    if (argc > 1){
        if (strcmp(argv[1], "-v") == 0){
            std::cout << parse_version() << std::endl;
            return 0;
        }
        if (strcmp(argv[1], "--config") == 0){
            std::cout << "Config:" << std::endl;
            std::cout << "Name:\t\t\t" << NAME << std::endl;
            std::cout << "Version:\t\t" << parse_version() << std::endl;
            std::cout << "Show welcome message:\t" << SHOW_WELCOME_MESSAGE << std::endl;
            std::cout << "Log level:\t\t" << LOG_LEVEL << std::endl;
            std::cout << "Log to file:\t\t" << PRINTSH_LOG_TO_FILE << std::endl;
            std::cout << "Log file path:\t\t" << PRINTSH_LOG_FILE_PATH << std::endl;
            std::cout << "History file path:\t" << HISTORY_FILE_PATH << std::endl;
            return 0;
        }
    }
    print_welcome();
    std::string output;
    std::string input;
    while(true){
        std::cout << bold.green << get_username() << "@" << get_hostname() << bold.reset << ":" << format_current_directory(get_current_directory()) << bold.reset << "$ ";
        std::getline(std::cin, input);
        run_input(input);
    }
}