# এই কোডটি GCD (Greatest Common Divisor) বা গ.সা.গু বের করার জন্য Euclidean Algorithm ব্যবহার করেছে।

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

print(gcd(15, 10))  # 5