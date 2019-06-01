from math import sqrt,floor

def isFactor(dividend,divisor):
    if(dividend % divisor == 0):
        return True
    else:
        return False
def isPrime(n):
    for i in range(2,n//2 + 1): # for i in range(2,floor(sqrt(n))+1)
        if isFactor(n,i):
            return False
    return True
        
    
    
def getPrimes(k):
    primeCounter = 0
    seqCounter=2
    while (primeCounter < k):
        if isPrime(seqCounter):
            print(seqCounter,end=' ')
            primeCounter +=1
        seqCounter +=1