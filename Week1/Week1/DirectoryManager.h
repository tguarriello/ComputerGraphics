#pragma once
class DirectoryManager
{
public:
	DirectoryManager();
	//instantiate and/or return dm_Instance
	static DirectoryManager* Instance() {};
	
private:
	static DirectoryManager* dm_Instance;

};

