#include "stdafx.h"
#include "DirectoryManager.h"

DirectoryManager* DirectoryManager::dm_Instance = NULL;


DirectoryManager* DirectoryManager::Instance()
{
	if (!dm_Instance)
		dm_Instance = new DirectoryManager;
	
	return dm_Instance;
}