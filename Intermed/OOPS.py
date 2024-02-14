class Person:
    def __init__(self, n, a):
        self.name = n
        self.age = a

    def displayInfo(self):
        print("Name:", self.name)
        print("Age:", self.age)

def main():
    # Create an object of the class 'Person'
    person1 = Person("Brian", 30)

    # Call the method to display information about the person
    person1.displayInfo()

if __name__ == "__main__":
    main()
