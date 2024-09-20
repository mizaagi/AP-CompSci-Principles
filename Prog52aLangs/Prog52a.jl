print("Enter width: ")
width = readline()
print("Enter length: ")
length = readline()

area = parse(Int64, width) * parse(Int64, length)
perimeter = 2*parse(Int64, width) + 2*parse(Int64, length)
print("Area: ", area)
print("\nPerimeter: ", perimeter, "\n")