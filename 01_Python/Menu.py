from Submenu import Submenu


class Menu(Submenu):
    """"
    Composite (Menu in our case) class
    Contains 'constructor', add method, remove method and print method
    """

    def __init__(self, name):
        """"
        Init method for a new composite/Menu object
        Input parameter: the name of new class object
        """
        super(Menu, self).__init__(self)
        self.name = name
        self.List_of_components = []

    def add(self, new_name):
        """"
        Method that adds a new object into the tree menu
        Input parameter: the name of object to be added in the tree menu
        """
        self.List_of_components.append(new_name)

    def print_method(self):
        """"
        Method that prints out the composite objects
        """
        print(self.name)
        for component in self.List_of_components:
            print("\t", end="")
            component.print_method()

    def remove(self, new_name):
        """"
        Method that removes an object from the tree menu
        Input parameter: the name of object to be removed from the tree menu
        """
        print(f"{new_name.name} removed!")
        self.List_of_components.remove(new_name)
