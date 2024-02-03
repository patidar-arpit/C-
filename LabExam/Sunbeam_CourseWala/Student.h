// Student.h

#pragma once

#include <string>
#include <vector>
#include "Course.h"

class Student {
private:
    std::string name;
    int roll;
    std::vector<Course> enrolledCourses;

public:
    Student();
    Student(std::string name, int roll);

    void setName(std::string name);

    void setRoll(int roll);
    int getRoll() const;
    std::string getName() const;
    const std::vector<Course>& getEnrolledCourses() const;

    void enrollCourse(const Course& course);
};
