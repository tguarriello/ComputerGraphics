#pragma once
#include "DirectoryObjectBase.h"
class myFolder :
	public DirectoryObjectBase
{
public:
	myFolder(string newName);

	std::vector<UserBase*> rootDirectory;
};
