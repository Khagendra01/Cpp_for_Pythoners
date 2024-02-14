def process_array(arr):
    arr[0] = 0
    arr[1] = 0

def main():
    SIZE = 5
    my_array = [1, 2, 3, 4, 5]

    for num in my_array:
        print(num, end=" ")

    # Passing the array to the function
    process_array(my_array)

    print()  # Print a newline

    for num in my_array:
        print(num, end=" ")

if __name__ == "__main__":
    main()
