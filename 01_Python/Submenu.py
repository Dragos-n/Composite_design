from Menu import Menu

class Submenu(Menu):

    def __str__(self):
        return "\t" + self.ComponentName


a = Submenu("Abc")
print(a)
