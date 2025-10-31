def add_numbers(*args):
    """This function adds variable number of integer arguments and returns the sum."""
    total = 0
    for num in args:
        total += num
    return total

# Main program
numbers = list(map(int, input("Enter numbers separated by space: ").split()))
print("Sum =", add_numbers(*numbers))
