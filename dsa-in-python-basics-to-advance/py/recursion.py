def printNumberrs(i, n):
    # base case
    if i > n:
        return
    # recursive case
    print(i, end=" ")
    printNumberrs(i+1, n)

printNumberrs(1, 5)