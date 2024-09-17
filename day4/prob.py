n = int(input())
m = [[] for t in range(n)]
for i in range(n):
    r = int(input())
    for j in range(r):
            str = input()
            z = list(str)
            l = (z.index('#')+1)
            m[i].append(l)
for i in m:
    k = len(i)
    for j in range (k-1 , -1 ,-1):
        print(i[j], end=" ")
    print()