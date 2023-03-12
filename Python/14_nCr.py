#nCr = n! / r! * (n - r)!
def factorial(num):
    factorial = 1;
    for i in range(1,num+1):
        factorial *= i
    return factorial


print("nCr Calculator")
n = int(input("Enter n: "))
r = int(input("Enter r: "))
nCr = factorial(n) / (factorial(r) * factorial(n-r))
print(f'{n}C{r}: {nCr}')