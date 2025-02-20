print("Menu driven code")
print("1.Area of square")
print("2.Area of circle")
print("3.Area of rectangle")
print("4.Area of triangle")
ch=int(input())
if(ch==1):
    a=int(input("Enter the side"))
    area=a*a
    print("The area of squre is:",area)
elif(ch==2):
    a=int(input("Enter the radius:"))
    area=3.14*a
    print("The area of circle is:",area)
elif(ch==3):
    print("The area of rectangle is:")
elif(ch==4):
    print("The area of triangle is:")
else:
    print("Wrong choice")
    