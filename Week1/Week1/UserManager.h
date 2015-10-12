#pragma once
#include "UserBase.h"
class UserManager
{
public:
	UserManager() {};
	static UserManager* Instance();
	UserBase* getActiveUser();
	string* getAllUsers();
	bool CreateNewUser();
	bool CreateSuperUser();
private:
	static UserManager* um_Instance;
	UserBase* activeUser;
	UserBase* superuser;
};

