/* Main file Source.cpp */

#include "Menu.h"
#include "Composite.h"
#include <iostream>


int main()
{
	Composite* Menu1 = new Composite("Menu_1");
	Composite* Menu2 = new Composite("Menu_2");
	Composite* Menu3 = new Composite("Menu_3");

	Composite* Submenu1 = new Composite("Submenu_1");
	Composite* Submenu2 = new Composite("Submenu_2");
	Composite* Submenu3 = new Composite("Submenu_3");
	Composite* Submenu4 = new Composite("Submenu_4");

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