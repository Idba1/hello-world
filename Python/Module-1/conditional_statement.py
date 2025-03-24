"""
in, not, not in, is, is not
"""
a = 65
boss = True
if (a < 60):
    print('60 er choto')
elif (a == 64):
    print('a = 64')
else:
    print('60 er boro')


if boss is True:
    print('tel er baksho niya astechi')
else:
    print('lunch er pore asen')

if boss is not True:
    print('tel er baksho niya astechi')
else:
    print('lunch er pore asen')

coin = 'head'
x = 2
print('---------------------------------')
if boss is True:
    print('tel er baksho niya astechi')
    if coin == 'head':
        print("mile geche")
        if 5 % 2 == 1 and x == 2:
            print('nested')
            if 2/2 == 2 or coin == 'head':
                print('or condition')
    else:
        print('mile nai')

else:
    print('lunch er pore asen')

print('---------------------------------')
