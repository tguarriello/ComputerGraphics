#include "stdafx.h"
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