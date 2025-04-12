class Student:
    def __init__(self, student_id, name, department):
        self.__student_id = student_id
        self.__name = name
        self.__department = department
        self.__is_enrolled = False

    def enroll_student(self):
        if self.__is_enrolled:
            print(f"{self.__name} is already enrolled.")
        else:
            self.__is_enrolled = True
            print(f"{self.__name} has been enrolled successfully.")

    def drop_student(self):
        if not self.__is_enrolled:
            print(f"{self.__name} is not enrolled currently.")
        else:
            self.__is_enrolled = False
            print(f"{self.__name} has been dropped successfully.")

    def view_student_info(self):
        status = "Enrolled" if self.__is_enrolled else "Not Enrolled"
        print("--------------------------------")
        print(f"id        : {self.__student_id}")
        print(f"Name      : {self.__name}")
        print(f"Department: {self.__department}")
        print(f"Status    : {status}")

    def get_id(self):
        return self.__student_id


class StudentDatabase:
    def __init__(self):
        self.students = []

    def add_student(self, student):
        self.students.append(student)

    def find_student_by_id(self, student_id):
        for student in self.students:
            if student.get_id() == student_id:
                return student
        return None

    def view_all_students(self):
        if len(self.students) == 0:
            print("No students found.")
        else:
            for student in self.students:
                student.view_student_info()


#student db
db = StudentDatabase()

# static data
s1 = Student(101, "Monira Islam", "SWE")
s2 = Student(102, "Anisha Ibnat", "CSE")
s3 = Student(103, "Rifa Tasniya", "BBA")

db.add_student(s1)
db.add_student(s2)
db.add_student(s3)

# menu
while True:
    print("\n===== Student Management Menu =====")
    print("1. View All Students")
    print("2. Enroll a Student")
    print("3. Drop a Student")
    print("4. Exit")

    choice = input("Enter your choice (1-4): ")

    if choice == '1':
        db.view_all_students()

    elif choice == '2':
        student_id = int(input("Enter student id to enroll: "))
        student = db.find_student_by_id(student_id)
        if student:
            student.enroll_student()
        else:
            print("student not found.")

    elif choice == '3':
        student_id = int(input("Enter student id to drop: "))
        student = db.find_student_by_id(student_id)
        if student:
            student.drop_student()
        else:
            print("student not found.")

    elif choice == '4':
        print("exiting program. thank you")
        break

    else:
        print("invalid choice. try again.")
