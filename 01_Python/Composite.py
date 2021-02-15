from Menu import Menu


class Composite(Menu):

    def __str__(self):
        print(";")
        for component in self.List_of_components:
            component.__str__
            return component

    def Add(self, new_component):
        self.List_of_components.append(new_component)

a = Composite()
a.Add("una")
a.Add("alta")
print(a)


