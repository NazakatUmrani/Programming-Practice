def isArmstrong(x):
    originalNum = x
    isArmstrong = 0
    xStr = str(x)
    while x>0:
        isArmstrong = isArmstrong + ((x%10)**len(xStr))
        x = x//10
    if originalNum == isArmstrong:
        return True
    else:
        return False
number= int(input("Enter a number to find it's closest armstrong number: "))
if(isArmstrong(number)):
    print(number,'is also a armstrong number itself\nand\nits closest armstrong numbers are')
i = 1
while True:
    if(isArmstrong(number+i)):
        print("Closest armstrong number greater than", number,"is",number+i)
    if(isArmstrong(number-i)):
        print("Closest armstrong number lower than", number,"is",number-i)
    if isArmstrong(number+i) or isArmstrong(number-i):
        break
    i+=1
