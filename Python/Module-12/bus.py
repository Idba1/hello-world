class Bus:
    def __init__(self, bus_number, route, seats):
        self.bus_number = bus_number
        self.route = route
        self.seats = seats
        self.booked_seats = []
        self.fare = 500

    def book_seat(self, passenger_name, phone_number):
        if self.seats > 0:
            self.booked_seats.append(
                {'name': passenger_name, 'phone': phone_number})
            self.seats -= 1
            print(f"\n Ticket Booked Successfully!")
            print(f"Name       : {passenger_name}")
            print(f"Phone      : {phone_number}")
            print(f"Bus        : {self.bus_number}")
            print(f"Route      : {self.route}")
            print(f"Fare       : ${self.fare}")
            print(f"Seat No    : {len(self.booked_seats)}")
        else:
            print("No seats available.")

    def view_details(self):
        print(
            f"Bus No: {self.bus_number}, Route: {self.route}, Available Seats: {self.seats}")


class Passenger:
    def __init__(self, name, phone, bus):
        self.name = name
        self.phone = phone
        self.bus = bus


class Admin:
    def __init__(self, username, password):
        self.username = username
        self.password = password

    def login(self):
        user = input("Enter admin username: ")
        pwd = input("Enter admin password: ")
        if user == self.username and pwd == self.password:
            print("Login successful!")
            return True
        else:
            print("Invalid username or password")
            return False


class BusSystem:
    def __init__(self):
        self.buses = []
        self.passengers = []
        self.admin = Admin("admin", "1234")

    def add_bus(self, number, route, seats):
        bus = Bus(number, route, seats)
        self.buses.append(bus)
        print("Bus added successfully.")

    def show_buses(self):
        if len(self.buses) == 0:
            print("No buses found.")
        else:
            print("\n--- All Buses ---")
            for bus in self.buses:
                print(
                    f"Bus No: {bus.bus_number}, Route: {bus.route}, Available Seats: {bus.seats}")

    def book_ticket(self, bus_number, name, phone):
        found = False
        for bus in self.buses:
            if bus.bus_number == bus_number:
                found = True
                bus.book_seat(name, phone)
                passenger = Passenger(name, phone, bus)
                self.passengers.append(passenger)
        if not found:
            print("Bus not found.")

    def show_booked_tickets(self):
        if len(self.passengers) == 0:
            print("No tickets booked yet.")
        else:
            print("\n--- Booked Tickets ---")
            for i, p in enumerate(self.passengers, start=1):
                print(
                    f"{i}. Name: {p.name}, Phone: {p.phone}, Bus: {p.bus.bus_number}, Route: {p.bus.route}, Fare: ${p.bus.fare}")


system = BusSystem()
#menu
while True:
    print("\n===== Bangladesh Bus Ticket Booking System =====")
    print("1. Admin Login")
    print("2. Book Ticket")
    print("3. View Buses")
    print("4. Exit")
    print("5. View Booked Tickets")

    choice = input("Enter your choice (1-5): ")

    if choice == '1':
        if system.admin.login():
            while True:
                print("\n--- Admin Menu ---")
                print("1. Add Bus")
                print("2. View All Buses")
                print("3. Logout")

                admin_choice = input("Enter your choice (1-3): ")

                if admin_choice == '1':
                    bus_number = input("Enter bus number: ")
                    route = input("Enter bus route: ")
                    seats = int(input("Enter total seats: "))
                    system.add_bus(bus_number, route, seats)

                elif admin_choice == '2':
                    system.show_buses()

                elif admin_choice == '3':
                    print("Admin logged out.")
                    break

                else:
                    print("Invalid option. Try again.")

    elif choice == '2':
        if len(system.buses) == 0:
            print("No buses available right now. Please try later.")
        else:
            system.show_buses()
            bus_number = input("Enter bus number to book: ")
            name = input("Enter passenger name: ")
            phone = input("Enter phone number: ")
            system.book_ticket(bus_number, name, phone)

    elif choice == '3':
        system.show_buses()

    elif choice == '4':
        print("Thank you for using the Bus Ticket System.")
        break

    elif choice == '5':
        system.show_booked_tickets()

    else:
        print("Invalid choice. Please try again.")