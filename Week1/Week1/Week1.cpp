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


//useful variables in main:
string commandIn;
	//Directory and User manager pointers
DirectoryManager* dManager;
UserManager* uManager;

int main()
{
	
	cout << "Welcome to the File Explorer Game!" << endl;
	cout << "type 'help' for list of commands" << endl;
	


    return 0;
}

void MainMenu()
{

	cout << "Main Menu: " << endl;
	
	cin >> commandIn;

	ParseCommand(commandIn);
}

bool CreateSingletonManagers()
{
	dManager = DirectoryManager::Instance();
	uManager = UserManager::Instance();
	if (dManager && uManager)
		return true;
	return false;
}

bool StartupFunctions()
{
	if (CreateSingletonManagers())
	{
		//Create Root directory
		//dManager->Instance();
		//create Default User
		uManager->CreateSuperUser();

	}
}

