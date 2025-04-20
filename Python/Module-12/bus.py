class Bus:
    def __init__(self, number, route, total_seats=60):
        self.number = number
        self.route = route
        self.total_seats = total_seats
        self.booked_seats = []
        self.fare = 500

    def available_seats(self):
        return self.total_seats - len(self.booked_seats)

    def book_seat(self, passenger_name, phone_number):
        if self.available_seats() > 0:
            self.booked_seats.append(
                {'name': passenger_name, 'phone': phone_number})
            print("\nTicket Booked Successfully")
            print(f"Name       : {passenger_name}")
            print(f"Phone      : {phone_number}")
            print(f"Bus        : {self.number}")
            print(f"Route      : {self.route}")
            print(f"Fare       : ${self.fare}")
            print(f"Seat No    : {len(self.booked_seats)}")
            return True
        else:
            print("No seats available")
            return False

    def view_details(self):
        print(
            f"Bus No: {self.number}, Route: {self.route}, Available Seats: {self.available_seats()}")


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
        user = input("enter admin username: ")
        pwd = input("enter admin password: ")
        if user == self.username and pwd == self.password:
            print("Admin login successful")
            return True
        else:
            print("invalid username or password")
            return False


class BusSystem:
    def __init__(self):
        self.buses = []
        self.passengers = []
        self.admin = Admin("admin", "1234")

    def add_bus(self, number, route, seats):
        for bus in self.buses:
            if bus.number == number:
                print("Bus already exists")
                return
        new_bus = Bus(number, route, seats)
        self.buses.append(new_bus)
        print("Bus added successfully")

    def show_buses(self):
        if len(self.buses) == 0:
            print("No buses available")
        else:
            print("\n--- All Buses ---")
            for bus in self.buses:
                print(
                    f"Bus No: {bus.number}, Route: {bus.route}, Available Seats: {bus.available_seats()}")

    def book_ticket(self, bus_number, name, phone):
        found = False
        for bus in self.buses:
            if bus.number == bus_number:
                found = True
                success = bus.book_seat(name, phone)
                if success:
                    passenger = Passenger(name, phone, bus)
                    self.passengers.append(passenger)
                return
        if not found:
            print("Bus not found")

    def view_all_tickets(self):
        if len(self.passengers) == 0:
            print("No tickets booked yet")
        else:
            print("\n--- Booked Tickets ---")
            for p in self.passengers:
                print(f"{p.name} - {p.phone} - Bus: {p.bus.number} ({p.bus.route})")


system = BusSystem()
# menu
while True:
    print("\n===== Bangladesh Bus Ticket Booking System =====")
    print("1. Admin Login")
    print("2. Book Ticket")
    print("3. View Buses")
    print("4. View Booked Tickets")
    print("5. Exit")

    choice = input("enter your choice (1-5): ")

    if choice == '1':
        if system.admin.login():
            while True:
                print("\n--- Admin Menu ---")
                print("1. Add Bus")
                print("2. View All Buses")
                print("3. Logout")
                admin_choice = input("enter your choice (1-3): ")

                if admin_choice == '1':
                    number = input("enter bus number: ")
                    route = input("enter route: ")
                    seats = int(input("enter total seats: "))
                    system.add_bus(number, route, seats)
                elif admin_choice == '2':
                    system.show_buses()
                elif admin_choice == '3':
                    print("Admin logged out")
                    break
                else:
                    print("invalid choice")

    elif choice == '2':
        if len(system.buses) == 0:
            print("No buses available right now")
        else:
            system.show_buses()
            bus_number = input("enter bus number to book: ")
            name = input("enter passenger name: ")
            phone = input("enter phone number: ")
            system.book_ticket(bus_number, name, phone)

    elif choice == '3':
        system.show_buses()

    elif choice == '4':
        system.view_all_tickets()

    elif choice == '5':
        print("thank you for using the Bus Ticket System")
        break

    else:
        print("invalid choice. Please try again")