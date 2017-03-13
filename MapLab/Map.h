#pragma once
#include "Location.h"
#include <string>
class Map
{
private :
	Location  *_currentLocation = nullptr;
public:
	Map(std::string startingLocationName);
	~Map();

	
};

