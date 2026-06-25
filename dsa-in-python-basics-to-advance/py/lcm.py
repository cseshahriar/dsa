# https://www.youtube.com/watch?v=0Xh_qqKZHMU
"""
num1 = 60 
num2 = 24 
60 = 2 x 2 x 3 x 5
24 = 2 x 2 x 2 x 3
gcd(common) = 2 x 2 x 3 = 12
lcm (common, uncommon)= 2 x 2 x 3  x 2 x 5 = 120
lcm = num1 x num2 / gcd
"""

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def lcm(a, b):
    return (a * b) // gcd(a, b)

print(lcm(15, 10))  # 30