l = [1, 2, 3, "mrugal", "jay", [1, 2, 3, 4, 5]]

for i in l[:]:  # iterate over a copy
    if isinstance(i, str):
        l.remove(i)

print(l)
