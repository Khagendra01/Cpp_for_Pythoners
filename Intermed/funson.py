def sub(x, y):
    return abs(x - y)

# Function to add two integers
def add(a, b):
    return a + b

def main():
    num1 = 4
    num2 = 6

    sum_val = add(num1, num2)
    print("The sum is:", sum_val)
    print("The difference is:", sub(num1, num2))

if __name__ == "__main__":
    main()
