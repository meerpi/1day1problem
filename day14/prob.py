res = []

z = int(input())
for i in range(z):
    n, m = map(int, input().split())
    j = [0] * n 
    count = 0 
    mon = 0
    j = list(map(int, input().split()))
    #print(j) 
    for k in j:
        if (k >= m):
            mon = mon + k
        elif (k == 0 and mon > 0):
            count += 1
            mon -= 1
    res.append(count)

for i in res:
    print(i)