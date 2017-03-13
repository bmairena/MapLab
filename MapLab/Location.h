#pragma once
#include <string>
class Location
{
private:
	std::string name;
public:
	Location(std::string name);
	~Location();
	Location *North = nullptr;
	Location *South = nullptr;
	Location *West = nullptr;
	Location *East = nullptr;
};

