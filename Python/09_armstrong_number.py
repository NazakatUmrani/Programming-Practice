x = int(input("Enter a number to is it armstrong: "))
originalNum = x
isArmstrong = 0
xStr = str(x)
while x>0:
    isArmstrong = isArmstrong + ((x%10)**len(xStr))
    x = x//10
if originalNum == isArmstrong:
    print("Yes",originalNum,"is armstrong number")