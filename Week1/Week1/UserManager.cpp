#include "stdafx.h"
#include <iostream>
#include "UserManager.h"

//set usermanager instance pointer to null
UserManager* UserManager::um_Instance = NULL;

UserManager* UserManager::Instance()
{
	//if usermanager doesn't exist yet, create it
	if (!um_Instance)
		um_Instance = new UserManager;
	return um_Instance;
}

string* UserManager::getAllUsers()
{
	return NULL;
	//return AllUsersList;
}

bool UserManager::CreateSuperUser()
{
	superuser = new UserBase;
	superuser->setPermissions(P_SUPERUSER);
	if (superuser)
	{
		allUsers.push_back(superuser);
		activeUser = superuser;
		superuser->setName("root");
		return true;
	}
	return false;
}

bool UserManager::CreateNewUser(string newName)
{
	//create newUser object to be added
	UserBase* newUser = new UserBase;
	//set new user name
	newUser->setName(newName);
	//set new user permissions
	newUser->setPermissions(1);
	//add new user to allusers
	allUsers.push_back(newUser);

	if (newUser != NULL)
	{
		return true;
	}
	return false;
}

void UserManager::AddUser(UserBase* newUser)
{
	//int numUsersAndOne = allUsers.size() + 1;
	//array<UserBase*, numUsersAndOne> tempArray;

	allUsers.push_back(newUser);
}

void UserManager::printUsers()
{
	for each(UserBase* user in allUsers)
	{
		cout << user->getName() <<  "-User" << endl;
	}
}