
class Submenu:
    """
    Class for leaf/submenu
    """

    def __init__(self, name):
        """"
        'Constructor' (init) method for a new leaf/submenu object
        Input parameter: the name of new class object
        """
        self.name = name

    def __del__(self):
        """"
        Destructor method for a new object - inherited also in Menu
        """
        del self.name

    def print_method(self):
        """"
        Method that prints out the leaf/submenu objects
        """
        print("\t", end="")
        print(self.name)
