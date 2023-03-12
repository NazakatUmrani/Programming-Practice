def isPrime(number):
    bool = True
    for i in range(2,number):
        if(number%i==0):
            bool = False
            break
    if(bool):
        print(number, "is a prime number")
    else:
        print(number,"is not a prime number")
fromNum = int(input("Provide range from num: "))
toNum = int(input("to Num: "))
for i in range(fromNum, toNum+1):
    isPrime(i)