def main():
    int_list = []

    for i in range(50):
        int_list.append(i*i)

    int_list.pop()

    int_list[40] = 300

    int_list.clear()

if __name__ == "__main__":
    main()
