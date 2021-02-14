#pragma once
#include <string>

/* Menu class */

class Menu
{
public:
	Menu(std::string new_component_s);
	virtual ~Menu() = 0;
	virtual void Add(Menu* new_menu_p) {};
	virtual void Print(unsigned int hierarchy_level) {};
	virtual bool isComposite() { return false; };
	char* ComponentName_p;
	//explicit Menu(std::string new_component_s);

};
