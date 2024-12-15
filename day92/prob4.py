
            
def count(a, arr):
    return arr.count(a)

n = int(input()) 

for _ in range(n):
    size = int(input()) 
    arr = list(map(int, input().split()))

    arr1 = []
    freq = {}
    max_count = 0
    current_mode = None

    for num in arr:
        arr1.append(num)
        freq[num] = freq.get(num, 0) + 1

        if freq[num] > max_count or (freq[num] == max_count and current_mode is None):
            max_count = freq[num]
            current_mode = num

    print(" ".join(map(str, arr1)))