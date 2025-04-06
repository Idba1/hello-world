N = int(input())
A = list(map(int, input().split()))
operations = 0
while True:
    all_even = True
    for i in range(N):
        if A[i] % 2 != 0:
            all_even = False
            break
    if not all_even:
        break
    for i in range(N):
        A[i] //= 2
    operations += 1

print(operations)