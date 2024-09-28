line = list(input())
res = ''
i = 0
while i < len(line) - 1:
    if line[i] == '-':
        line[i] += line[i+1]
        line.pop(i+1)
    else:
        i += 1
for i in line:
    if i == '.':
        res = res + '0'
    elif i == '-.':
        res = res + '1'
    elif i == '--':
        res = res + '2'
print(res)