def factorial(num):
    factorial = 1;
    for i in range(1,num+1):
        factorial *= i
    print(f'Factorial of {num}: {factorial}')


fromNum = int(input("Provide range from num: "))
toNum = int(input("to Num: "))
for i in range(fromNum, toNum+1):
    factorial(i)