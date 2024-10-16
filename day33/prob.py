n = int(input())
for i in range(n):
    s = int(input())
    arr = [0]*s
    arr = list(map(int, input().split()))
    arr.sort()
    while(len(arr) > 1 ):
        if(arr[1] - arr[0] <= 1):
            arr.remove(arr[0])
        else: 
            break
    if len(arr) == 1:
        print('YES')
    else:
        print('NO')
    
            
    