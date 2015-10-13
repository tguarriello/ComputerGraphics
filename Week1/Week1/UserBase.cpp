#include "stdafx.h"
#include "UserBase.h"


UserBase::UserBase()
{
	name = "";
}

bool UserBase::isAdmin()
{
	return (permissions == 0);
}

string UserBase::getName()
{
	if (name == "")
		return "No Name";
	return name;
}

void UserBase::setPermissions(int newPermissions)
{
	permissions = newPermissions;
}