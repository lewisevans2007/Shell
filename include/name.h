/* Shell (name.h)
 * A simple shell made in C++
 * Github: https://www.github.com/awesomelewis2007/shell
 *
 * header for getting usernames and hostnames
*/

#include <iostream>
#include <string>
#include <unistd.h>

/**
 * Gets the username
 * @returns: std::string
 */
std::string get_username();

/**
 * Gets the hostname
 * @returns: std::string
 */
std::string get_hostname();