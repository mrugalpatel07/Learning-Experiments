d2={"name":"mrugal","age":16,"city":"unjha"}
d3={"python":23,"java":50}

d2.update(d3)

print(d2)


print(d2.pop("city"))
print(d2)

print(d3.popitem())
print(d3)

del d2["age"]
print(d2)

d2.clear()
print(d2)