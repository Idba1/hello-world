from abc import ABC


class User(ABC):
    def __init__(self, name, phone, email, address):
        self.name = name
        self.phone = phone
        self.email = email
        self.address = address


class Customer(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)
        self.cart = Order()

    def view_menu(self, restaurent):
        restaurent.menu.show_menu()

    def add_to_cart(self, restaurent, item_name, quantity):
        item = restaurent.menu.find_item(item_name)
        if item:
            if quantity > item.quantity:
                print('item quantity exceeded')
            else:
                item.quantity = quantity
                self.cart.add_item(item)
                print('Item added')
        else:
            print('Item not found')

    def view_cart(self):
        print('*****View Cart*****')
        print('Name\tPrice\tQuantity')
        for item, quantity in self.cart.items.items():
            print(f'{item.name}\t{item.price}\t{quantity}')
        print(f'Total Price: {self.cart.total_price}')


class Order:
    def __init__(self):
        self.items = {}

    def add_item(self, item):
        if item in self.items:
            self.items[item] += item.quantity
        else:
            self.items[item] = item.quantity

    def remove(self, item):
        if item in self.item:
            del self.items[item]

    @property
    def total_price(self):
        return sum(item.price * quantity for item, quantity in self.items.items())

    def clear(self):
        self.items = {}


class Employee(User):
    def __init__(self, name, phone, email, address, designation, salary, age):
        super().__init__(name, phone, email, address)
        self.designation = designation
        self.salary = salary
        self.age = age


emp = Employee('Idba', 1618, 'idba@gmail.com', '22 Dhaka',
               'Jr. Frontend Developer', 10000, 21)
# print(emp.name)


class Admin(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)

    def addEmployee(self, restaurent, employee):
        restaurent.add_employee(employee)
        # print(f'{employee.name} is added successfully!!')

    def view_employee(self, restaurent):
        restaurent.view_employee()

    def add_new_item(self, restaurent, item):
        restaurent.menu.add_menu_item(item)

    def remove_item(self, restaurent, item):
        restaurent.menu.remove_item(item)


class Restaurent:
    def __init__(self, name):
        self.name = name
        self.employees = []  # database
        self.menu = Menu()

    def addEmployee(self, employee):
        self.employees.append(employee)
        print(f'{employee.name} is added successfully!!')

    def view_employee(self):
        print('Employee List -> ')
        for emp in self.employees:
            print(emp.name, emp.phone, emp.email, emp.address)


class Menu:
    def __init__(self):
        self.items = []  # item's database

    def add_menu_item(self, item):
        self.items.append(item)

    def find_item(self, item_name):
        for item in self.items:
            if item.name.lower() == item_name.lower():
                return item
        return None

    def remove_item(self, item_name):
        item = self.find_item(item)
        if item:
            self.items.remove(item)
            print(f"{item} deleted successfully")
        else:
            print('item not found')

    def show_menu(self):
        print('*****Menu*****')
        print('Name\tPrice\tQuantity')
        for item in self.items:
            print(f"{item.name}\t{item.price}\t{item.quantity}")


class FoodItem:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity


ad = Admin('Admin', 1234, 'admin@gmail.com', '22 Dhaka')
# print(ad.name)

mamar_res = Restaurent('Mamar Restaurent')
mn = Menu()
item = FoodItem('Pizza', 12.45, 10)
item2 = FoodItem('burger', 10, 30)
ad.add_new_item(mamar_res, item)
ad.add_new_item(mamar_res, item2)


customer1 = Customer('Karim', 'k@gmail.com', 9564, 'dhaka')
customer1.view_menu(mamar_res)

item_name = input('Enter item Name : ')
item_quantity = int(input('Enter Item quantity : '))

customer1.add_to_cart(mamar_res, item_name, item_quantity)
customer1.view_cart()
