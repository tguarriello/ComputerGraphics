// Week1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "DirectoryManager.h"
#include "UserManager.h"
using namespace std;

//Function Declarations
void MainMenu();
	//No logic in main; let ParseCommand deal with user input as string
void ParseCommand(string newCom);
	//Run this on program open to create Directory and User managers
void CreateSingletonManagers();


//useful variables in main:
string commandIn;
	//Directory and User manager pointers
DirectoryManager* dManager;
UserManager* uManager;

int main()
{
	CreateSingletonManagers();
	cout << "Welcome to the File Explorer Game!";
	


    return 0;
}

void MainMenu()
{

	cout << "Main Menu: \n";
	
	cin >> commandIn;

	ParseCommand(commandIn);
}

void CreateSingletonManagers()
{
	dManager = DirectoryManager::Instance();
	uManager = UserManager::Instance();
}