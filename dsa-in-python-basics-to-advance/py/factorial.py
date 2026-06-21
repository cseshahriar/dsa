# factorial n = 5, 1x2x3x4x5

def fact(n):
    if n == 0:
        return 1
    # print(n, fact(n-1), n * fact(n-1))
    return n * fact(n-1)

result = fact(5) # 5 24 120
print(result)    