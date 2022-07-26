# Fibonacci numbers for a range 1 to 1000.

a=0
b=1
print(a)
print(b)
c=a+b
while True:
    c=a+b
    if(c>1000):
        break
    a=b
    b=c
    print(c)

