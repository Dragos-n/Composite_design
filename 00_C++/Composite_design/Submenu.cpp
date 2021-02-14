#include "Submenu.h"
#include <iostream>

SubMenu::SubMenu(string new_submenu_s)
{
	SubmenuName_p = new char[sizeof(new_submenu_s)];
	strcpy_s(SubmenuName_p, sizeof(new_submenu_s), new_submenu_s.c_str());
	std::cout << "Submenu()" << std::endl;
}

SubMenu::~SubMenu()
{
	delete[] SubmenuName_p;
	std::cout << "~Submenu()" << std::endl;
}
void SubMenu::Print(unsigned int hierarchy_level)
{
	cout << "\t" << SubmenuName_p << endl;
}