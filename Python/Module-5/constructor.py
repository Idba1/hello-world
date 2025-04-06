class Phone:
    manifecture = 'China'
    
    def __init__(self ,owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price
    
    def send_sms(self, phone, sms):
        text = f'sending to {phone} {sms}'
        print(text)
        
my_phone = Phone('kala Chand', 'oppo', 56000)
print(my_phone.brand, my_phone.owner, my_phone.price)

her_Phone = Phone('me', 'itel', 12000)
print(her_Phone.brand, her_Phone.owner, her_Phone.price)

dad_Phone = Phone('dad', 'nokia', 3000)
print(dad_Phone.brand, dad_Phone.owner, dad_Phone.price)