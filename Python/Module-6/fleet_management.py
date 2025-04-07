class Company:
    def __init__(self, name, address, ):
        self.name = name
        self.address = address
        self.routes = []
        self.bus = []
        self.driver = []
        self.counter = []
        self.supervisors = []
        
    
class Driver:
    def __init__(self, name, license, age):
        self.name = name
        self.license = license
        self.age = age
        
class Counter:
    def __init__(self):
        pass
    
    def purchase_a_ticket(self, start, destination):
        pass

class Passenger:
    pass

class supervisor:
    pass

red_mia = Driver('red mia', 'ab1213', 23)
print(red_mia.license)