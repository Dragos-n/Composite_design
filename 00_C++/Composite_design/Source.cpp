/* Main file Source.cpp */

#include "Menu.h"
#include "Submenu.h"
#include "Composite.h"
#include <iostream>


int main()
{
	Composite* Menu1 = new Composite("Menu_1");
	Composite* Menu2 = new Composite("Menu_2");
	Composite* Menu3 = new Composite("Menu_3");

	SubMenu* Submenu1 = new SubMenu("Submenu_1");
	SubMenu* Submenu2 = new SubMenu("Submenu_2");
	SubMenu* Submenu3 = new SubMenu("Submenu_3");
	SubMenu* Submenu4 = new SubMenu("Submenu_4");

	Menu1->Add(Submenu1);
	Menu1->Add(Submenu2);
	Menu1->Add(Submenu3);
	
	Menu2->Add(Submenu3);
	Menu2->Add(Submenu4);
	Menu2->Add(Menu1);

	Menu3->Add(Submenu1);
	Menu3->Add(Menu2);

	std::cout << endl << endl;

	Menu1->Print(0);
	Menu2->Print(0);
	Menu3->Print(0);

	std::cout << endl << endl;

	delete Menu1;
	delete Menu2;
	delete Menu3;
	delete Submenu1;
	delete Submenu2;
	delete Submenu3;
	delete Submenu4;

	return 0;
}