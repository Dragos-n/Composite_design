#pragma once
#include "Menu.h"
#include <string>
using namespace std;

/*Submenu class*/

class SubMenu : public Menu 
{
public:

	using Menu::Menu;
	~SubMenu();
	void Print(unsigned int hierarchy_level);
	//explicit SubMenu(std::string new_component_s) : Menu(new_component_s) {};
};