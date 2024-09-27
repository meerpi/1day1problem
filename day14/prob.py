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
        if k == 0:
            count += 1
        if k > m:
            mon += k 
    if(mon > count):
        res.append(count)
    elif(count > mon):
        res.append(mon)

for i in res:
    print(i)