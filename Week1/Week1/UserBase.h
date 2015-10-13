#pragma once

#include "Constants.h"

using namespace std;

class UserBase
{
public:
	UserBase();
	bool isAdmin();
	string getName();
	void setName(string newName) { name = newName; }
	//Use handy constants from Constants.h for setPermissions
	void setPermissions(int newPermissions);

private:
	string name;
	int permissions;
};

