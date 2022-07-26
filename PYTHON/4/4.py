#  prime numbers for a range 1 to 1000

for n in range(1,1001):
    c=0
    for i in range(2,n):
        if(n%i==0):
            c=1
            break
    if(c==0):
        print(n)