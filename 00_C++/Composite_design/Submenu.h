#pragma once
#include "Menu.h"
#include <string>
using namespace std;

/*Submenu class*/

class SubMenu : public Menu 
{
public:

	SubMenu(string new_submenu_s);
	~SubMenu();
	void Print(unsigned int hierarchy_level);

private:
	char* SubmenuName_p;
};