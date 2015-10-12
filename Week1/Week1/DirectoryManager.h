#pragma once
class DirectoryManager
{
public:
	DirectoryManager();
	static DirectoryManager* Instance() {};
	
private:
	static DirectoryManager* dm_Instance;
};

