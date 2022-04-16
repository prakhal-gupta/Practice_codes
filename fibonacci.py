n = int(input("Enter Number of terms in series\n"))
if (n==1) :
    print(0)
elif (n==2) :
    print(0)
    print(1)
else :
    a=0
    b=1
    print(a)
    print(b)
    for i in range(3,n + 1):
        c = a + b
        print(c)
        a=b
        b=c

