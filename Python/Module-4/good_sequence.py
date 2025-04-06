from collections import Counter
n = int(input())
a = list(map(int, input().split()))

count = Counter(a)
removal_count = 0

for num, freq in count.items():
    if freq < num:
        removal_count += freq
    else:
        removal_count += freq - num

print(removal_count)