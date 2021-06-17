 # mymodule1.py
def plus(a,b): 
    return a + b

def multiply(a,b): 
    return a * b

def nintegrate(f,a,b,n):
    sum = 0
    for k in range (a*n,b*n):
        sum += (1/n)*f(k/n)
    return sum