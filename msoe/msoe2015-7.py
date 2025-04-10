def find_triangle(n):
    return int((n * (n+1))/2)
def generate_triangles(n):
    ts = [0, 1]
    for i in range(1, n):
        if find_triangle(i) <= n:
            ts.append(find_triangle(i))
            ts.append(find_triangle(i))
            ts.append(find_triangle(i))
    return sorted(ts)
def alternate_tsum(n, x=-1):
    subts = generate_triangles(n)
    triangles = []
    temp = x
    for i in range(x, -len(subts), -1):
        if not subts[i] + sum(triangles) > n:
            triangles.append(subts[i])
        if len(triangles) == 3:
            break
    while len(triangles) < 3:
        triangles.append(0)
    if sum(triangles) != n:
        return alternate_tsum(n, temp-1)
    return triangles
#------------------------------------------------------------

def main():
    for i in range(1, 51):
        print(i, ":", alternate_tsum(i), sum(alternate_tsum(i)) == i)
        #print("subts: ", alternate_tsum(i)[1])

if __name__ == "__main__":
    main()