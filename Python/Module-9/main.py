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
