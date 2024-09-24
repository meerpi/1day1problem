def check(m):
    if m.startswith('10'):
        if len(m) >= 4 and m[2] not in '0':
            print("YES")
        elif len(m) == 3 and m[2] in '23456789':
            print("YES")
        else:
            print("NO")
    else:
        print("NO")

n = int(input())
l = []
for i in range(n):
    l.append(input())

for i in range(n):
    check(l[i])