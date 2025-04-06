class Pen:
    menufecture = 'matador'
    
    def __init__(self, owner, brand, price):
        self.owner= owner
        self.brand = brand
        self.price = price

my_pen = Pen('idba', 'iten-rio', 10)
print(my_pen.owner, my_pen.brand, my_pen.price)