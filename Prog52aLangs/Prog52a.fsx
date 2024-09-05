open System


Console.WriteLine("Enter length: ")
let length = int(Console.ReadLine())
Console.WriteLine("Enter width: ")
let width = int(Console.ReadLine())
let area = length * width
let perim = 2*length + 2*width

Console.WriteLine($"Area: {area}\nPerim: {perim}")
