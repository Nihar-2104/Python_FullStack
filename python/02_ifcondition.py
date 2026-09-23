a = int(input ("Enter A:"))
b = int(input ("Enter B:"))
c = int(input ("Enter C:"))



if a>0:
    print("A is Positive Number")
else:
    print("A is Negative Number")


if a%2==0:
    print("A is even Number")
else:
    print("A is odd Number")


if a>b:
    print("A is Max Number")
else:
    print("B is Max Number")


if a > b:
    if a > c:
        print("A is max Number")
    else:
        print("C is max Number")
elif b > c:
    print("B is max Number")
else:
    print("C is max Number")
