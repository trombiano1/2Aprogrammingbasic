def nintegrate(f,a,b,n):
    sum = 0
    for k in range (a*n,b*n):
        sum += (1/n)*f(k/n)
    return sum