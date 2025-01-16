#ifndef _UTILS_
#define _UTILS_
#include "PhoneBook.hpp"
#include "Contact.hpp"
/*       Utils functions declaration      */

int             CheckIfEmpty(std::string s);
std::string     get_input(std::string to_display);
int             isNumber(std::string buffer);
std::string     is_valid_num(std::string input);
void            Print_header();
std::string     ParseIt(std::string Name);
void            DisplayContact(Contact user);

#endif