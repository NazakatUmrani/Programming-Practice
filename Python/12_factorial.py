num = int(input("Enter a number to find it's factorial: "))
factorial = 1;
for i in range(1,num+1):
    factorial *= i
print(f'Factorial of {num}: {factorial}')
