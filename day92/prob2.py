n = int(input())
for i in range(n):
    mst = []
    st = list(input())
    st = st[::-1]
    for j in st:
        if( j == 'p'):
            mst.append('q')
        elif( j == 'q'):
            mst.append('p')
        else:
            mst.append(j)
    print(''.join(mst))
