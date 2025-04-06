def max_split_balanced_string(S):
    count_L = 0
    count_R = 0
    result = []
    substring = ''
    for char in S:
        substring += char
        
        if char == 'L':
            count_L += 1
        else:
            count_R += 1
        
        if count_L == count_R:
            result.append(substring)
            substring = ''
            count_L = 0
            count_R = 0
    
    print(len(result))
    for s in result:
        print(s)

S = input()
max_split_balanced_string(S)