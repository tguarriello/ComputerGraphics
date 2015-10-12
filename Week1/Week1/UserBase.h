#pragma once

#include "Constants.h"
using namespace std;

class UserBase
{
public:
	UserBase();
	bool isAdmin();
	string getName();
	void setPermissions(int newPermissions);

private:
	string name;
	int permissions;
};

