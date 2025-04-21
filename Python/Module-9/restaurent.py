from menu import Menu


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
