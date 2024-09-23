n = int(input())
m = [20000]*n
for i in range(n):
    x,y = map(int,input().split())
    if(x != y):
        for j in range (x,y):
            m[i] = min(m[i],((j - x)+(y - j)))  
    else:
        m[i] = 0
for i in range(n):
    print(m[i])