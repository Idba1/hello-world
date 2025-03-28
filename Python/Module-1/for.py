

numbers = [5, 10, 15, 20, 25]
sum = 0
for num in numbers:
    print(num)
    sum = sum + num
    if sum > 20:
        print('bigger sum', sum)
print(sum)

text = 'Pagla Howar'
for char in text:
    print(char)

print(range(1, 10))

for i in range(1, 10, 2):
    print(i)


friends = ['nobel', 'ashir', 'rabi', 'naz']
for friend in friends:
    print(friend)