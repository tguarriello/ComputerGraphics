#include "stdafx.h"
#include "UserBase.h"


UserBase::UserBase()
{
}

bool UserBase::isAdmin()
{

}

string UserBase::getName()
{
	return name;
}

void UserBase::setPermissions(int newPermissions)
{
	permissions = newPermissions;
}