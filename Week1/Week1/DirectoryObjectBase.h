#pragma once
#include <string>

using namespace std;

class DirectoryObjectBase
{
public:
	DirectoryObjectBase(string newName);
	virtual string getName() { return name; }
	virtual string getType() { return type; }
protected:
	string name;
	string type;

};

