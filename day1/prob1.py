def sumint(n):
    total = 0
    for i in range(1, n + 1):
        total += i
    return total

n = int(input())
m = 0
i = 1
count = 0

while m <= n:
    m = m + sumint(i)
    count += 1
    i += 1
if m > n:
    count -= 1
print(count) # because the while loop will stop when m is greater than n not equal to n or smaller than n
