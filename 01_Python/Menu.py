
class Menu:
    ComponentName = ""
    List_of_components = []

    def __init__(self):
        print("Component created")

    def __del__(self):
        print("Component deleted")

    def __str__(self):
        return self.ComponentName




