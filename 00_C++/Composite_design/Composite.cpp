#include "Composite.h"
#include <iostream>

	void Composite::Add(Menu* new_menu_p)
	{
		MenuList_p.push_back(new_menu_p);
	}

	void Composite::Print(unsigned int hierarchy_level = 0)
	{

		cout << this->Name_p << endl;
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
