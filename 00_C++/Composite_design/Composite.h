#pragma once
#include "Menu.h"
#include <list>
using namespace std;

class Composite: public Menu
{
public:
	explicit Composite(const char* new_name_p) : Menu(new_name_p) {};
	void Add(Menu* composite_p);
	void Print(unsigned int hierarchy_level);

private:
	list<Menu*> MenuList_p;
};
