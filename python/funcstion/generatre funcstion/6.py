def count(n):
    count=1
    while count <= n :
        yield count
        count = count + 1
c=count(5)
for i in c:
    print(i)