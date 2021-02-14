#pragma once
#include "Menu.h"
#include <list>
using namespace std;

class Composite: public Menu
{
public:
	using Menu::Menu;
	~Composite();
	void Add(Menu* composite_p);
	void Print(unsigned int hierarchy_level);
	bool isComposite()
	{
		return true;
	};
	//explicit Composite(std::string new_component_s) : Menu(new_component_s) {};
private:
	list<Menu*> MenuList_p;
};
