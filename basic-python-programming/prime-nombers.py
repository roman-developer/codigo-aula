from math import sqrt

def is_prime_number(number):
    # Return false if the number is equal or lower than 1
    if number <= 1:
        return False
    # Check divisors from 2 to the square root of n. Return false if exists any
    for i in range(2, int(sqrt(number)) + 1):
        if number % i == 0:
            return False
    return True

print(is_prime_number(5))
print(is_prime_number(4))
