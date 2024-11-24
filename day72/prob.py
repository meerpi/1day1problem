n = int(input())
for i in range(n):
    a, b = input().split(' ')
    a = list(a)
    b = list(b)
    temp = a[0]
    a[0] = b[0]
    b[0] = temp
    a = str(''.join(a))
    b = str(''.join(b))
    print(a + ' ' + b)