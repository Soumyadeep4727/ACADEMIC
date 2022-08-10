top=-1
max=10
stack = []
while True:
    ch = int(input('1 for push, 2 for pop, 3 for display, 4 to quit : '))
    if ch ==1:
        if top == max-1:
            print('Overflow')
        else:
            top = top+1
            ch = int(input('Enter the value : '))
            stack.insert(top,ch)
    elif ch ==2:
        if top == -1:
            print('Underflow')
        else:
            top = top-1
    elif ch == 3:
        if top==-1:
            print('Empty')
        else:
            print(stack[0:top+1])
    else:
        quit()



