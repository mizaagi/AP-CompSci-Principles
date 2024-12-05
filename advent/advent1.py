import numpy as np
import pandas as pd
import math

df = pd.read_csv("advent/1.txt", sep="   ")
df = np.array(df).astype(int)
left = df[:,0]
right = df[:,1]

print(left)
print(right)

left = sorted(left)
right = sorted(right)

print(left)
print(right)

dist = 0
for i in range(len(left)):
    dist += math.dist(int(left[i]), int(right[i]))

print(df)
print("Total distance: " + str(dist))