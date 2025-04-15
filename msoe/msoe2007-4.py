import math

a1 = input("Address 1: ")
a2 = input("Address 2: ")
a1_num1 = int(a1[0:a1.index(" ")].strip())
a1_dir1 = a1[a1.index(" ")+1].strip()
a1_num2 = int(a1[a1.index(" ")+3:a1.index(" ")+6].strip())
a1_dir2 = a1[a1.index(" ")+6:].strip()
a2_num1 = int(a2[0:a2.index(" ")].strip())
a2_dir1 = a2[a2.index(" ")+1].strip()
a2_num2 = int(a2[a2.index(" ")+3:a2.index(" ")+6].strip())
a2_dir2 = a2[a2.index(" ")+6:].strip()
if a1_dir1 == "N" or a1_dir2 == "S":
    a1_num1 /= 80
if a2_dir1 == "N" or a2_dir2 == "S":
    a2_num1 /= 80
if a1_dir1 == "W" or a1_dir2 == "E":
    a1_num1 /= 120
if a2_dir1 == "W" or a2_dir2 == "E":
    a2_num1 /= 120
if a1_dir2 == "N" or a1_dir2 == "S":
    a1_num2 /= 80
if a2_dir2 == "N" or a2_dir2 == "S":
    a2_num2 /= 80
if a1_dir2 == "W" or a1_dir2 == "E":
    a1_num2 /= 120
if a2_dir2 == "W" or a2_dir2 == "E":
    a2_num2 /= 120
dist = math.sqrt((abs(a1_num1-a1_num2)**2)+(abs(a2_num1-a2_num2)**2))
print(dist)
