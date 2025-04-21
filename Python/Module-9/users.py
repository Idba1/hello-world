from abc import ABC
from orders import Order


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

    def pay_bill(self):
        print(f'Total {self.cart.total_price} paid successfully')
        self.cart.clear()


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
        
    def view_Menu(self, restaurent):
        restaurent.menu.show_menu()


# ad = Admin('Admin', 1234, 'admin@gmail.com', '22 Dhaka')
# # print(ad.name)

# mamar_res = Restaurent('Mamar Restaurent')
# mn = Menu()
# item = FoodItem('Pizza', 12.45, 10)
# item2 = FoodItem('burger', 10, 30)
# ad.add_new_item(mamar_res, item)
# ad.add_new_item(mamar_res, item2)


# customer1 = Customer('Karim', 'k@gmail.com', 9564, 'dhaka')
# customer1.view_menu(mamar_res)

# item_name = input('Enter item Name : ')
# item_quantity = int(input('Enter Item quantity : '))

# customer1.add_to_cart(mamar_res, item_name, item_quantity)
# customer1.view_cart()
