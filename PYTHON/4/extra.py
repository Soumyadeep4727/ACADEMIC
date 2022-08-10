print('Enter the numbers and done when completed : ')
lst = []
c=0
while True :
    n = input()
    if(n == 'done'):
        break
    else:
        n = int(n)
    if n not in lst: 
        lst.append(n)
    else:
        c =1
print(lst)
if (c==0):
    print('Unique elements')
else:
    print('Presence of reduntant elements')
