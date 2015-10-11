//
//  main.cpp
//  Week1
//
//  Created by Theo Guarriello on 10/8/15.
//  Copyright © 2015 Theo Guarriello. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "FileParser.hpp"
#include "FileParser.hpp"
using namespace std;

//function declarations:
void MainMenu();
void ParseCommand(string inputCom);
//main loop useful variables
string inputString;


//command constants
const string NEWUSERCOM = "nu";
const string EXISTINGUSERCOM = "eu";
const string HELPCOMMAND = "help";

//Main function
int main(int argc, const char * argv[])
{
    cout << "Welcome to the Inventory Game!\n";
    
    MainMenu();
    
    
    return 0;
}

//main menu function
//this shouldn't have any logic other than giving user input to commandparser
void MainMenu()
{
    //print menu options
    cout << "To create a new user enter: " << NEWUSERCOM << endl;
    cout << "To sign into an existing account enter: " << EXISTINGUSERCOM << endl;
    cout << "To print a list of commands enter: " << HELPCOMMAND << endl;
    
    //get user input
    cin >> inputString;
    
    //give input string to ParseCommand function
    ParseCommand(inputString);
    
    //after parsing input/running commands, return to mainmenu
    MainMenu();
    
}

void ParseCommand(string inputCom)
{
    if(inputCom.compare(NEWUSERCOM) == 0)
        cout << "Creating new user" << endl;
    
    else if (inputCom.compare(EXISTINGUSERCOM) == 0)
        cout << "Sign into existing user" << endl;
    else if( inputCom.compare(HELPCOMMAND) == 0)
        cout << "List commands" << endl;
    
    else
        cout << "You dun fucked up pal" << endl;
}