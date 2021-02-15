#include "Menu.h"
#include <iostream>

Menu::Menu(const char* new_name_p)
{
	if (new_name_p != NULL)
	{
	Name_p = new char[strlen(new_name_p) + 1];
	strcpy_s(Name_p, strlen(new_name_p) + 1, new_name_p);
	std::cout << "Component()" << std::endl;
	};
};


Menu::~Menu()
{
	delete[] Name_p;
	std::cout << "~Component()" << std::endl;
};