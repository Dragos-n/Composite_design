#include "Menu.h"
#include <iostream>

Menu::Menu(std::string new_component_s)
{
	ComponentName_p = new char[sizeof(new_component_s)];
	strcpy_s(ComponentName_p, sizeof(new_component_s), new_component_s.c_str());
	std::cout << "Component()" << std::endl;
};


Menu::~Menu()
{
	std::cout << "~Component()" << std::endl;
};