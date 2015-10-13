#pragma once
#include <string>
//A database of useful constants, defined in one convinient header!

//User permission levels
const int P_SUPERUSER = 0;
const int P_REGUSER = 1;
const int P_PRISONER = 2;

//Command Constants
const std::string C_NEWUSER = "newuser";
const std::string C_LISTUSERS = "allusers";
const std::string C_EDITUSERNAME = "changename";
const std::string C_LOGIN = "login";
const std::string C_LOGOUT = "logout";
const std::string C_NEWFILE = "cn";
const std::string C_EDITFILE = "edit";
const std::string C_MOVE = "mv";
const std::string C_NEWFOLDER = "mkdir";
const std::string C_HELP = "help";