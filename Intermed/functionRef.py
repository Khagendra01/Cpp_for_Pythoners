def swap(a, b):
    # Python swaps can be done directly without needing a temporary variable
    a, b = b, a
    return a, b

def main():
    x = 5
    y = 10

    print("Before swapping: x =", x, ", y =", y)

    # Call the swap function, passing x and y by reference
    x, y = swap(x, y)

    print("After swapping: x =", x, ", y =", y)

if __name__ == "__main__":
    main()

