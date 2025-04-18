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
        self.employees = []  # database

    def addEmployee(self, name, phone, email, address, designation, salary, age):
        # employee class er ekta obj create hoye jabe
        employee = Employee(name, phone, email, address, designation, salary, age)
        self.employees.append(employee)
        print(f'{employee.name} is added successfully!!')

    def view_employee(self):
        print('Employee List -> ')
        for emp in self.employees:
            print(emp.name, emp.phone, emp.email, emp.address)


ad = Admin('Admin', 1234, 'admin@gmail.com', '22 Dhaka')
ad.addEmployee('sagor', 2345, 's@gmail.com', 'Rangpur', 'backend developer', 200000, 34)
ad.view_employee()
