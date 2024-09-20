
print("Enter length: ")
var length = Int(readLine()!)! ?? 0
print("Enter width: ")
var width = Int(readLine()!)! ?? 0

var area = length * width
var perim = 2*length + 2*width
print("Area: ", area)
print("Perimeter: ", perim)