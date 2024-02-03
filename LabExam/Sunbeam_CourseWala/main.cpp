// main.cpp
#include <iostream>
#include <vector>
#include "Student.h"
#include "Course.h"
#include<algorithm>

using namespace std;

vector<Student> students;
vector<Course> courses;


// main.cpp

// ... (previous code)

void registerStudent() {
    string name;
    int roll;

    cout << "Enter the name of the student: ";
    cin >> name;

    cout << "Enter the roll of the student: ";
    cin >> roll;

    Student student(name, roll);
    students.push_back(student);

    cout << "Student registered successfully" << endl;
}

void takeCourse() {
    int roll;
    cout << "Enter the roll of the student: ";
    cin >> roll;

    // Check if the student exists
    auto it = find_if(students.begin(), students.end(), [roll](const Student& s) { return s.getRoll() == roll; });

    if (it != students.end()) {
        string courseName;
        cout << "Enter the name of the course (PG-DAC, PG-DBDA, PG-IOT): ";
        cin >> courseName;

        double courseFees = 0.0;

        // Find the course fees based on the course name
        for (const Course& c : courses) {
            if (c.getCourseName() == courseName) {
                courseFees = c.getCourseFees();
                break;
            }
        }

        Course course(courseName, courseFees);
        it->enrollCourse(course);

        cout << "Course taken successfully" << endl;
    } else {
        cout << "Student not found!" << endl;
    }
}

void displayStudentCourses() {
    int roll;
    cout << "Enter the roll of the student: ";
    cin >> roll;

    auto it = find_if(students.begin(), students.end(), [roll](const Student& s) { return s.getRoll() == roll; });

    if (it != students.end()) {
        cout << "Courses enrolled by student " << it->getName() << " (Roll: " << it->getRoll() << "):" << endl;
        for (const Course& c : it->getEnrolledCourses()) {
            cout << c.getCourseName() << endl;
        }
    } else {
        cout << "Student not found!" << endl;
    }
}

void displayAllStudents() {
    cout << "List of all students and their registered courses:" << endl;
    for (const Student& s : students) {
        cout << "Student: " << s.getName() << " (Roll: " << s.getRoll() << ")" << endl;
        cout << "Enrolled Courses: ";
        for (const Course& c : s.getEnrolledCourses()) {
            cout << c.getCourseName() << " ";
        }
        cout << "\n\n";
    }
}

int main() {
    int choice;

    while (true) {
        Course c1("PD-DAC",234.5);
        Course c2("PD-DBDA",2345.5);
        Course c3("PD-DIOT",2000);
        
        courses.push_back(c1);
        courses.push_back(c2);
        courses.push_back(c3);
        cout << "1. Register Student\n2. Take Course\n3. Display Student Courses\n4. Display All Students\n5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerStudent();
                break;
            case 2:
                takeCourse();
                break;
            case 3:
                displayStudentCourses();
                break;
            case 4:
                displayAllStudents();
                break;
            case 5:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
