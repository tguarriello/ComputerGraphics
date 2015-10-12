#pragma once
#include <string>

using namespace std;

class DirectoryObjectBase
{
public:
	DirectoryObjectBase(string newName);
	virtual string getName();
	virtual string getType();
protected:
	string name;
	string type;

};

