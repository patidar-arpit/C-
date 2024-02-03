// Student.cpp

#include "Student.h"

Student::Student() : roll(0),name("") {}

Student::Student(std::string name, int roll) : name(name), roll(roll) {}


void Student::setName(std::string name){
    this->name = name;
}

void Student::setRoll(int roll){
    this->roll = roll;
}
int Student::getRoll() const {
    return roll;
}

std::string Student::getName() const {
    return name;
}

const std::vector<Course>& Student::getEnrolledCourses() const {
    return enrolledCourses;
}

void Student::enrollCourse(const Course& course) {
    enrolledCourses.push_back(course);
}
