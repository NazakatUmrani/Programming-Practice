def factorial(num):
    factorial = 1;
    for i in range(1,num+1):
        factorial *= i
    return factorial
def nCr(n, r):
    nCrVar = factorial(n) / (factorial(r) * factorial(n-r))
    return nCrVar
print("Pascal Triangle Generator")
r = int(input("Enter number of rows you want to generate: "))
for i in range(0, r):
    for j in range(0,i+1):
        print(int(nCr(i,j)), end = " ")
    print()