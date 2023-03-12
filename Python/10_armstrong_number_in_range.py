def isArmstrong(x):
    originalNum = x
    isArmstrong = 0
    xStr = str(x)
    while x>0:
        isArmstrong = isArmstrong + ((x%10)**len(xStr))
        x = x//10
    if originalNum == isArmstrong:
        print("Yes",originalNum,"is an armstrong number")
    #else:
    #    print("No",originalNum,"is not an armstrong number")
fromNum = int(input("Provide range from num: "))
toNum = int(input("to Num: "))
for i in range(fromNum, toNum+1):
    isArmstrong(i)