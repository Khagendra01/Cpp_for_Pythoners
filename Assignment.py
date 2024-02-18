class Student:
    def __init__(self, name, age, major, graduation_year):
        self.name = name
        self.age = age
        self.major = major
        self.graduation_year = graduation_year

    def calculate_graduation_year(self):
        current_year = 2024  
        years_left = self.graduation_year - current_year
        return current_year + years_left

    def greet_student(self):
        print(f"Hello, {self.name}! Welcome to {self.major} program.")

    def laugh(self):
        print("Haha")


student1 = Student("Alexander Supertramp", 22, "Computer Science", 2025)

student2_name = input("Enter student2's name: ")
student2_age = int(input("Enter student2's age: "))
student2_major = input("Enter student2's major: ")
student2_graduation_year = int(input("Enter student2's graduation year: "))
student2 = Student(student2_name, student2_age, student2_major, student2_graduation_year)


student1.greet_student()
student2.greet_student()


print(f"{student1.name} is expected to graduate in the year: {student1.calculate_graduation_year()}")
print(f"{student2.name} is expected to graduate in the year: {student2.calculate_graduation_year()}")

for i in range(10):
    student1.laugh()
    student2.laugh()
