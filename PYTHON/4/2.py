# prime number or not

n = int(input('Enter a number : '))
c=0
for i in range(2,n):
    if(n%i==0):
        c=1
        break
if(c==0):
    print('Prime number')
else:
    print('Not a prime number')
