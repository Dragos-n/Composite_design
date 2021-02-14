#include "Submenu.h"
#include <iostream>


SubMenu::~SubMenu()
{
	delete[] ComponentName_p;
	std::cout << "~Component()" << std::endl;
}

void SubMenu::Print(unsigned int hierarchy_level)
{
	cout << "\t" << ComponentName_p << endl;
}