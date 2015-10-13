#pragma once
#include "UserBase.h"
#include <vector>

using namespace std;

class UserManager
{
public:
	UserManager() {};
	static UserManager* Instance();
	string getActiveUser() { return activeUser->getName(); }
	string* getAllUsers();
	int getNumUsers() { return allUsers.size(); }
	bool CreateNewUser(string newName);
	void printUsers();
	//This only runs once in main and signs in superuser
	bool CreateSuperUser();
private:
	static UserManager* um_Instance;
	UserBase* activeUser;
	UserBase* superuser;
	vector <UserBase*> allUsers;

	void AddUser(UserBase* newUser);
};

