l = [1, 2, 3, "mrugal", "jay", [1, 2, 3, 4, 5]]

for i in l:
    if type(i) == str:
        l.remove(i)

print(l)