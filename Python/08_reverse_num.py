num = int(input("enter a number: "))
reversedNum = 0
while(num>0):
    reversedNum = (reversedNum*10) + (num%10)
    num = num//10
print("Reversed num is:",reversedNum)