def test_fibo(n):
    a, b = 0, 1
    for i in range(n):
        yield a
        a, b = b, a + b

for i in test_fibo(10):
    print(i)


    #yield data throw genreter funcastion