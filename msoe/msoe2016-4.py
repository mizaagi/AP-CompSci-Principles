def get_prime_factors(e):
    n = 2
    factors = []
    while n**2 < e:
        if e % 2 == 0:
            factors.append(n)
            num //= n
        else:
            n += 1
    if e > 1:
        factors.append(e)
    return factors

global alt_primes = []
global n_primes = get_prime_factors(n)
global relatives = []

def goofyahh():
    for prime in alt_primes:
        if prime in n_primes:
            return False
    return True

def euler(n):
    for num in range(n-1):
        alt_primes = get_prime_factors(num)
        if goofyahh():
            relatives.append(num)