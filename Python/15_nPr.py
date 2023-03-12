#nPr = n! / (n−r)!
def factorial(num):
    factorial = 1;
    for i in range(1,num+1):
        factorial *= i
    return factorial


print("nPr Calculator")
n = int(input("Enter n: "))
r = int(input("Enter r: "))
nPr = factorial(n) / factorial(n-r)
print(f'{n}C{r}: {nPr}')