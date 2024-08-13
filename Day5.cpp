#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person(string n = "", int a = 0) : name(n), age(a) {}
    virtual void displayInfo() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};
class Student : public Person {
private:
    int studentID;
    string major;
public:
    Student(string n = "", int a = 0, int id = 0, string m = "") 
        : Person(n, a), studentID(id), major(m) {}

    void displayInfo() const override {
        Person::displayInfo();
        cout << "Student ID: " << studentID << "\nMajor: " << major << endl;
    }
};
class Faculty : public Person {
private:
    int facultyID;
    string department;
public:
    Faculty(string n = "", int a = 0, int id = 0, string d = "") 
        : Person(n, a), facultyID(id), department(d) {}

    void displayInfo() const override {
        Person::displayInfo();
        cout << "Faculty ID: " << facultyID << "\nDepartment: " << department << endl;
    }
};
class Course {
private:
    string courseName;
    int courseID;
public:
    Course(string name = "", int id = 0) : courseName(name), courseID(id) {}
    void displayInfo() const {
        cout << "Course Name: " << courseName << "\nCourse ID: " << courseID << endl;
    }
};
class UniversityManagementSystem {
private:
    vector<Student> students;
    vector<Faculty> faculties;
    vector<Course> courses;
public:
    void addStudent(const Student& s) {
        students.push_back(s);
    }

    void addFaculty(const Faculty& f) {
        faculties.push_back(f);
    }

    void addCourse(const Course& c) {
        courses.push_back(c);
    }

    void displayStudents() const {
        cout<<"\nStudent List"<<endl;
        for (const Student& s : students) {
            s.displayInfo();
            cout<<endl;
        }
    }
    void displayFaculties() const {
        cout<<"\nFaculty List"<<endl;
        for (const Faculty& f : faculties) {
            f.displayInfo();
            cout<<endl;
        }
    }
    void displayCourses() const {
        cout<<"\nCourse List"<<endl;
        for (const Course& c : courses) {
            c.displayInfo();
            cout<<endl;
        }
    }
};
// Function to get Student details from user
Student getStudentFromUser() {
    string name, major;
    int age, id;

    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Student Age: ";
    cin >> age;
    cout << "Enter Student ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Student Major: ";
    getline(cin, major);

    return Student(name, age, id, major);
}
// Function to get Faculty details from user
Faculty getFacultyFromUser() {
    string name, department;
    int age, id;
    cout << "Enter Faculty Name: ";
    getline(cin, name);
    cout << "Enter Faculty Age: ";
    cin >> age;
    cout << "Enter Faculty ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Faculty Department: ";
    getline(cin, department);

    return Faculty(name, age, id, department);
}

// Function to get Course details from user
Course getCourseFromUser() {
    string name;
    int id;

    cout << "Enter Course Name: ";
    getline(cin, name);
    cout << "Enter Course ID: ";
    cin >> id;

    return Course(name, id);
}

// Main function
int main() {
    UniversityManagementSystem ums;
    int choice;

    do {
        cout << "\nUniversity Management System"<<endl;
        cout << "1. Add Student\n";
        cout << "2. Add Faculty\n";
        cout << "3. Add Course\n";
        cout << "4. Display Students\n";
        cout << "5. Display Faculties\n";
        cout << "6. Display Courses\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                Student student = getStudentFromUser();
                ums.addStudent(student);
                break;
            }
            case 2: {
                Faculty faculty = getFacultyFromUser();
                ums.addFaculty(faculty);
                break;
            }
            case 3: {
                Course course = getCourseFromUser();
                ums.addCourse(course);
                break;
            }
            case 4: {
                ums.displayStudents();
                break;
            }
            case 5: {
                ums.displayFaculties();
                break;
            }
            case 6: {
                ums.displayCourses();
                break;
            }
            case 7: {
                cout << "Exiting the system." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != 7);

    return 0;
}
