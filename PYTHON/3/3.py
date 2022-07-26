# Take score only between 0.0 and 10. 
# >=9 A, >=8 B, >=7 C, >=6 D, <6 F

a = float(input("Enter a score between 0 and 10 : "))
if(a<0 or a>10):
    print("Wrong Input")
else:
    if(a>=9):
        print('A')
    elif(a>=8):
        print('B')
    elif(a>=7):
        print('C')
    elif(a>=6):
        print('D')
    else:
        print('F')