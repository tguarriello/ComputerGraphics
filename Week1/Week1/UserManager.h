#pragma once
#include "UserBase.h"
class UserManager
{
public:
	UserManager() {};
	static UserManager* Instance();
private:
	static UserManager* um_Instance;
	
};

