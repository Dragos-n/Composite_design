from Menu import Menu
from Submenu import Submenu


def clear():
    print("\n")


menu_1 = Menu("MAIN_MENU")
menu_2 = Menu("Menu_2")
menu_3 = Menu("Menu_3")
menu_4 = Menu("Menu4")

submenu_1 = Submenu("SubMenu1")
submenu_2 = Submenu("SubMenu2")
submenu_3 = Submenu("SubMenu3")
submenu_4 = Submenu("SubMenu4")
submenu_5 = Submenu("SubMenu5")


menu_2.add(submenu_1)
menu_2.add(submenu_2)
menu_3.add(submenu_3)
menu_3.add(submenu_4)
menu_4.add(submenu_5)
menu_4.add(menu_2)
menu_1.add(menu_2)
menu_1.add(menu_3)
menu_1.add(menu_4)

clear()
menu_1.print_method()
clear()
menu_1.remove(menu_3)
clear()
menu_1.print_method()

