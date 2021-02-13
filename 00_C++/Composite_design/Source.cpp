// Composite design.cpp : Defines the entry point for the console application.
//

#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Menu
{
public:

	virtual void Add(Menu* new_menu) {};

	virtual ~Menu() {};
	virtual void Component_print() {};

};

class Leaf : public Menu {

private:

	string leaf;

public:

	Leaf(string leaf)
	{
		this->leaf = leaf;
	};

	~Leaf()
	{
		std::cout << leaf << " deleted" << endl;
	};

	void Add(Menu* new_submenu)
	{
		// this->leaf = new_submenu;
	};

	void Component_print()
	{
		cout << "\t" << this->leaf << " ";
	};
};

class Composite : public Menu {

private:
	vector <Menu*> gList;
	string menu;

public:

	void add(Menu* aComposite)
	{
		gList.push_back(aComposite);
	}

	Composite(string new_menu)
	{
		this->menu = new_menu;
	};

	~Composite()
	{
		std::cout << menu << " deleted" << endl;
	};

	void Component_print()
	{
		cout << "\t" << this->menu << "-" << endl;
		for (auto leaf : gList)
		{
			leaf->Component_print();
		}
		cout << endl;
	};

};

int main()
{
	Composite c1("Menu1");
	Composite c2("Menu2");
	Composite c3("Menu3");
	Leaf l1("leaf1");
	Leaf l2("leaf2");
	Leaf l3("leaf3");
	c1.add(&l1);
	c1.add(&l2);
	c2.add(&l1);
	c2.add(&l3);
	c3.add(&c1);
	c3.add(&c2);
	c1.Component_print();
	c2.Component_print();
	c3.Component_print();
	return 0;
}