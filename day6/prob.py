n = int(input())
p = 0
y = 0
for i in range(n):
    a,b = map(int , input().split())
    p = (p + b)-a
    if p > y:
        y = p
print(y)
