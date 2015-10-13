// Week1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "DirectoryManager.h"
#include "UserManager.h"
using namespace std;

//Required Commands:
/*
new user
edit user name
sign in
sign out
new file
edit file
move filee
new folder
move folder
*/

//Function Declarations
void MainMenu();
	//No logic in main; let ParseCommand deal with user input as string
void ParseCommand(string newCom);
	//Run this on program open to create Directory and User managers
bool CreateSingletonManagers();
	//Run these at startup
bool StartupFunctions();
	//runs with 'help' command
void printAllCommands();


//useful variables in main:
string commandIn;
string activeUserName;
	//Directory and User manager pointers
DirectoryManager* dManager;
UserManager* uManager;

int main()
{
	if (!StartupFunctions())
	{
		cout << "Startup functions failed!" << endl;
		return -4;
	}

	cout << "Welcome to the File Explorer Game!" << endl;
	cout << "type 'help' for list of commands" << endl;
	
	while (true)
	{
		MainMenu();
	}
	

    return 0;
}

void MainMenu()
{
	activeUserName = uManager->getActiveUser();
	
	cout << activeUserName << " ~ $:";
	cin >> commandIn;

	ParseCommand(commandIn);
}

bool CreateSingletonManagers()
{
	dManager = DirectoryManager::Instance();
	uManager = UserManager::Instance();
	if (dManager && uManager)
	{
		return true;
	}
	return false;
}

bool StartupFunctions()
{
	if (CreateSingletonManagers())
	{
		//Create Root directory
		//dManager->Instance();
		//create Default User
		if (uManager->CreateSuperUser())
		{
			return true;
		}
	}
	return false;

}

void ParseCommand(string commandIn)
{
	//find the space in the input string to separate command / options
	int spaceLoc = commandIn.find(" ");
	//extract command from input string
	string command = commandIn.substr(0, spaceLoc);
	string option = commandIn.substr(spaceLoc + 1, commandIn.length() );


	//All commands should have the format: 
	//foo( optionString)
	if (command.compare(C_NEWUSER) == 0)
	{
		if (uManager->CreateNewUser(option) == true)
		{
			cout << "Created new user" << endl;
		}
		else 
		{
			cout << "User creation failed!" << endl;
		}
	}
	else if (command.compare(C_LISTUSERS) == 0)
	{
		cout << "Users: " << endl;
		uManager->printUsers();
		cout << endl;
	}
	else if (command.compare(C_HELP) ==  0)
	{
		printAllCommands();
	}
	else
	{
		cout << "Command not recognized" << endl;
	}
}

void printAllCommands()
{
	cout << C_NEWUSER << endl;
	cout << C_LISTUSERS << endl;
	cout << C_EDITUSERNAME << endl;
	cout << C_LOGIN << endl;
	cout << C_LOGOUT << endl;
	cout << C_NEWFILE << endl;
	cout << C_EDITFILE << endl;
	cout << C_MOVE << endl;
	cout << C_NEWFOLDER << endl;
	cout << C_HELP << endl;
}