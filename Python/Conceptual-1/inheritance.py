class Vehicle:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def speed(self):
        pass


class Car(Vehicle):
    def __init__(self, brand, model, capacity):
        super().__init__(brand, model)
        self.capacity = capacity


class Bike(Vehicle):
    def __init__(self, brand, model, milage):
        super().__init__(brand, model)
        self.milage = milage


bmw = Car('BMW', 'A8', 8)
print(bmw.brand, bmw.model, bmw.capacity)
