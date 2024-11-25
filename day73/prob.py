n = int(input())
for j in range(n):
    si = int(input())
    a = input()
    
    for char in set(a):
        indexes = [i for i, x in enumerate(a) if x == char]
        for i in range(len(indexes) - 1)):     
            if not all(indexes[i] + 1 == indexes[i + 1]
                print("NO")
                break
    else:

        print("YES")
