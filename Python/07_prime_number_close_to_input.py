def isPrime(number):
    bool = True
    for i in range(2,number):
        if(number%i==0):
            bool = False
            break
    return bool

number= int(input("Enter a number to find it's closest prime number: "))
if(isPrime(number)):
    print(number,'is also a prime number itself\nand\nits closest prime numbers are')
i = 1
while True:
    if(isPrime(number+i)):
        print("Closest prime number greater than", number,"is",number+i)
    if(isPrime(number-1)):
        print("Closest prime number lower than", number,"is",number-i)
    if(isPrime(number+i) or isPrime(number-1)):
        break
    i+=1
