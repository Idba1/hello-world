# def call():
#     print('i dnk')
#     return ' call done'

# class Phone:
#     price=120000
    
#     def call (self):
#         print('i know')

# my_phone = Phone()
# call()

class A:
    def __init__(self, value):
        value = 3
        self.value = value

    def change(self):
        self.value = 12

ans = []
a = A(13)
ans.append(a.value)
a.change()
ans.append(a.value)
print(ans)
