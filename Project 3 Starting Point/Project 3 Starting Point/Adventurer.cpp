#include "Adventurer.h"



Adventurer::Adventurer(std::string name) : _name(name)
{
}


Adventurer::~Adventurer()
{
}

std::string Adventurer::Attack()
{
	return "Swings a fist at the badguys";
}
