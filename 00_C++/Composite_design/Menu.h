#pragma once

/* Menu class */

class Menu
{
public:
	explicit Menu(const char* new_name_p);
	virtual ~Menu() = 0;
	virtual void Add(Menu* new_menu_p) {};
	virtual void Print(unsigned int hierarchy_level) {};
	virtual bool isComposite() { return false; };
	char* Name_p;

};
