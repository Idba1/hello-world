from abc import ABC


class User(ABC):
    def __init__(self, name, phone, email, address):
        self.name = name
        self.phone = phone
        self.email = email
        self.address = address


class Employee(User):
    def __init__(self, name, phone, email, address, designation, salary, age):
        super().__init__(name, phone, email, address)
        self.designation = designation
        self.salary = salary
        self.age = age


emp = Employee('Idba', 1618, 'idba@gmail.com', '22 Dhaka',
               'Jr. Frontend Developer', 10000, 21)
print(emp.name)


class Admin(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)

    def addEmployee(self, restaurent, employee):
        restaurent.add_employee(employee)
        # print(f'{employee.name} is added successfully!!')

    def view_employee(self, restaurent):
        restaurent.view_employee()


class Restaurent:
    def __init__(self, name):
        self.name = name
        self.employees = []  # database

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


ad = Admin('Admin', 1234, 'admin@gmail.com', '22 Dhaka')
# ad.addEmployee('sagor', 2345, 's@gmail.com', 'Rangpur',
#                'backend developer', 200000, 34)
# ad.view_employee()
