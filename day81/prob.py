import random

def generate_derangement(n):
    arr = list(range(1, n + 1))
    for i in range(n - 1, 0, -1):
        j = random.randint(0, i)
        if arr[j] == i + 1 or arr[i] == j + 1:
            j = (j + 1) % (i + 1)
        arr[i], arr[j] = arr[j], arr[i]
    if arr[0] == 1:
        arr[0], arr[1] = arr[1], arr[0]
    return arr

n = int(input())
for _ in range(n):
    a = int(input())
    result = generate_derangement(a)
    print(" ".join(map(str, result)))
