#pragma once
#include <string>
#include "Adventurer.h"

class Mage : public Adventurer
{
private:

public:
	Mage(std::string name);
	~Mage();

	std::string Attack() { return GetName() + " casts magic missle at the darkness!"; }	
};

