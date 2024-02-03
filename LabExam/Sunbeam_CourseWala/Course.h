// Course.h

#pragma once

#include <string>

class Course {
private:
    std::string courseName;
    double courseFees;

public:
    Course();
    Course(std::string courseName, double courseFees);

    std::string getCourseName() const;
    double getCourseFees() const;

    std::string getCourseName();
};
