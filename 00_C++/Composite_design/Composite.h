#pragma once
#include "Menu.h"
#include <string>
#include <list>
using namespace std;

class Composite: public Menu
{
public:
	Composite(string new_composite_s);
	~Composite();
	void Add(Menu* composite_p);
	void Print(unsigned int hierarchy_level);
	bool isComposite()
	{
		return true;
	};
private:
	char* CompositeName_p;
	list<Menu*> MenuList_p;
};
