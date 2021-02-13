/* Composite design.cpp */

#include <vector>
#include <string>
#include <iostream>
using namespace std;

/* Component class */

class Menu
{
public:

	virtual void Add(Menu* new_menu) {};
	virtual void Component_print() {};
	virtual ~Menu() {};
};

/*Leaf class*/

class SubMenu : public Menu {

private:

	string submenu_s;

public:

	SubMenu(string submenu_s)
	{
		this->submenu_s = submenu_s;
	};

	~SubMenu()
	{
		submenu_s.erase(std::remove(submenu_s.begin(), submenu_s.end(), '\t'), submenu_s.end());
		std::cout << submenu_s << " deleted" << endl;
	};

	virtual void Add(Menu* new_submenu_p)
	{
	};

	void Component_print()
	{
		cout << this->submenu_s << endl;
	};
};

/*Composite class*/

class Composite : public Menu {

private:
	vector <Menu*> menu_list;
	string menu_s;

public:

	void Add(Menu* composite_p)
	{
		menu_list.push_back(composite_p);
	}

	Composite(string new_menu_s)
	{
		this->menu_s = new_menu_s;
	};

	~Composite()
	{
		menu_s.erase(std::remove(menu_s.begin(), menu_s.end(), '\t'), menu_s.end());
		std::cout << menu_s << " deleted" << endl;
	};

	void Component_print()
	{
		cout << this->menu_s << endl;
		for (auto submenu : menu_list)
		{
			submenu->Component_print();
		}
		cout << endl;
	};

};

int main()
{
	Composite m1("Menu1");
	Composite m2("Menu2");
	Composite m3("Menu3");
	SubMenu s1("\tSubMenu1");
	SubMenu s2("\tSubMenu2");
	Composite s3("\tSubMenu3");
	SubMenu ss1("\t\tSubSubMenu1");
	SubMenu ss2("\t\tSubSubMenu2");
	
	m1.Add(&s1);
	m1.Add(&s2);

	s3.Add(&ss1);
	s3.Add(&ss2);
	m2.Add(&s1);
	m2.Add(&s3);
	
	m3.Add(&m1);
	m3.Add(&m2);

	m1.Component_print();
	m2.Component_print();
	m3.Component_print();
	return 0;
}