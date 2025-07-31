def fibo():
    a,b=0,1
    while True:
        yield a
        a,b=b,a+b

fib=fibo()

for i in range(10):
    print(next(fib))

    type(fibo)