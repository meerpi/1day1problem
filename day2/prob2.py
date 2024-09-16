def diff(m, line):
    differ = []
    for i in range(m-1):
        differ.append(abs(line[i] - line[i+1]))
    differ.append(abs(line[m-2] - line[m-1]))
    return differ
            
def diff1(m,line,k):
    differ1 = []
    for i in range(m):
        differ1.append(abs(line[i] - k))
    return differ1
n = int(input())
soln = []
for i in range(n):
    m = int(input())
    line = list(map(int,input().split(" ")))
    line.sort()
    soln1 = "NO"
    differm = diff(m,line)
    for j in range(1,100):
        if j in line:
            continue
        differ = diff1(m,line,j)
        count = 0
        for k in range(0,2):
            if differ[k] <= differm[k]:
                count += 1
        if count == m:
            soln1 = "YES"
            break
            
    soln.append(soln1)
for i in soln:
    print(i)