#pragma once

/* Menu class */

class Menu
{
public:

	Menu();
	virtual ~Menu() = 0;
	virtual void Add(Menu* new_menu_p) {};
	virtual void Print(unsigned int hierarchy_level) {};
	virtual bool isComposite() { return false; };
};
