dict = {"Tetrahedron" : 4, "Cube": 6,"Octahedron" : 8,"Dodecahedron" : 12, "Icosahedron": 20}
n = int(input())
m = 0
for i in range(n):
    s = input()
    if s in dict:
        m += dict[s]
print(m)   