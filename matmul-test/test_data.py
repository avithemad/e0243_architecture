import random
import math
import sys

n = int(sys.argv[1])

print (n)

for i in range(n):
    for j in range(n):
        print (math.floor(random.random()*100))
        print (math.floor(random.random()*100))

