"""" no duplicates 
all elements uniuq
mutable
unorder
multipal data type use
use {} 

"""

my={1,2,3,4}
print(my)
print(type(my))

s1={1,2,3,4,5,8,1,5,9,}
print(s1)

s2=set()
print(s2)

s3=set({2,4,6})
print(s3)


s=set()

s.add(2)
s.add(3)
s.add(15)
s.add(1)
print(s)


s5={5,4,6,9}
s5.discard(6)
print(s5)

s5.remove(4)
print(s5)