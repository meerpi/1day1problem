list=[]
n=int(input())
k=str(n)
for i in k:
    if i=='4' or i=='7':
        list.append(i)
if len(list)==4 or len(list)==7:
    print("YES")
else:
    print("NO")