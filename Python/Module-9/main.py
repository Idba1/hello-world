from food_item import FoodItem
from users import Customer, Admin, Employee
from restaurent import Restaurent
from orders import Order
from menu import Menu

mamar_restaurent = Restaurent('Mamar Restaurent')


def Customer_menu():
    name = input('Enter your Name : ')
    email = input('Enter your email : ')
    phone = input('Enter your Phone : ')
    address = input('Enter your Address : ')
    customer = Customer(name=name, email=email, phone=phone, address=address)

    while True:
        print(f'welcome {customer.name}!!')
        print('1. view menu')
        print('2. Add item to cart')
        print('3. view cart')
        print('4. pay bill')
        print('5. exit')

        choice = int(input('Enter your Choice : '))
        if choice == 1:
            customer.view_menu(mamar_restaurent)

        elif choice == 2:
            item_name = input('enter item name : ')
            item_quantity = int(input('Enter item Quantity : '))
            customer.add_to_cart(mamar_restaurent, item_name, item_quantity)
        elif choice == 3:
            customer.view_cart()
        elif choice == 4:
            customer.pay_bill()
        elif choice == 5:
            print('Thank you for using our system')
            break
        else:
            print('invalid input')


def admin_menu():
    name = input('Enter your Name : ')
    email = input('Enter your email : ')
    phone = input('Enter your Phone : ')
    address = input('Enter your Address : ')
    admin = Admin(name=name, email=email, phone=phone, address=address)

    while True:
        print(f'welcome {admin.name}!!')
        print('1. Add new Item')
        print('2. Add new Employee')
        print('3. view Employee')
        print('4. View Items')
        print('5. Deleted Item')
        print('6. Exit')

        choice = int(input('Enter your Choice : '))
        if choice == 1:
            item_name = input('Enter Item Name : ')
            item_price = float(input('Enter item price : '))
            item_quantity = int(input('Enter Item Quantity : '))
            item = FoodItem(item_name, item_price, item_quantity)
            admin.add_new_item(mamar_restaurent, item)

        elif choice == 2:
            name = input('Enter Employee Name : ')
            phone = input('Enter Employee phone: ')
            email = input('Enter Employee email : ')
            designation = input('Enter Employee designation : ')
            age = input('Enter Employee age : ')
            salary = input('Enter Employee salary : ')
            address = input('Enter Employee address : ')
            employee = Employee(name, phone, email, address,
                                designation, salary, age)
            admin.addEmployee(mamar_restaurent, employee)

        elif choice == 3:
            admin.view_employee(mamar_restaurent)

        elif choice == 4:
            admin.view_Menu()

        elif choice == 5:
            item_name = input('Enter Item Name : ')
            admin.remove_item(mamar_restaurent)

        elif choice == 6:
            print('Thank you for using our system')
            break

        else:
            print('invalid input')


while True:
    print('Welcome!!')
    print('1. Customer')
    print('2. Admin')
    print('3. Exit')

    choice = input('Enter your Choice : ')
    if choice == '1':
        Customer_menu()
    elif choice == '2':
        admin_menu()
    elif choice == '3':
        print('Exiting system. Goodbye!')
        break
    else:
        print('Invalid choice. Please try again.')
