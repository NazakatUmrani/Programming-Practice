number = int(input("Enter a number to find if it's prime or not: "))
bool = True
for i in range(2,number):
    if(number%i==0):
        bool = False
        break
if(bool):
    print("It is a prime number")
else:
    print("it is not a prime number")