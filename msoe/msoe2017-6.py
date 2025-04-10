def prime_factors(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return set(factors)
def psi(n):
    for i in prime_factors(n):
        n *= 1 + 1/i
    return int(n)

print(psi(500))
