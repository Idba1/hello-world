class Shop:
    products = []

    def __init__(self, name):
        self.name = name

    def add_product(self, name, price):
        product = Product(name, price)
        self.products.append(product)

    def sell(self):
        pass

    def __str__(self):  # first priority
        return f"this is a shop with name {self.name}"

    def __repr__(self):  # second priority
        return "this is a shop"


class Product:
    def __init__(self, name, price):
        self.name = name
        self.price = price
        
    # def __str__(self):
    #     return self.name
    
    def __repr__(self):
        return self.name


shop1 = Shop('test shop 1')
shop1.add_product('Mobile phone', 40000)
shop1.add_product('i phone', 140000)
print(shop1)
print(shop1.products)


shop2 = Shop('test shop 2')
shop2.add_product('Laptop', 10000000)

print(shop1.name)
print(shop2.name)
