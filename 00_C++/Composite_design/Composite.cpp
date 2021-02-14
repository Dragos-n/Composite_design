#include "Composite.h"
#include <iostream>

	Composite::Composite(string new_composite_s)
	{
		CompositeName_p = new char[sizeof(new_composite_s) + 1];
		strcpy_s(CompositeName_p, sizeof(new_composite_s) +1 , new_composite_s.c_str());
	}

	Composite::~Composite()
	{
		delete[] CompositeName_p;
	}

	void Composite::Add(Menu* new_menu_p)
	{
		MenuList_p.push_back(new_menu_p);
	}

	void Composite::Print(unsigned int hierarchy_level = 0)
	{

		cout << this->CompositeName_p << endl;
		for (auto submenu : MenuList_p)
		{
			for (unsigned int counter = 0; counter < hierarchy_level; counter++)
			{
				cout << "\t";
			}
			submenu->Print(hierarchy_level++);
		}
		cout << endl;
	};
