list = [1,2,4,5]

max = -1
min = 100000000

for i in list:
    if max<i:
        max = i
    if min>i:
        min = i
print("max is:", max)
print("min is:", min)