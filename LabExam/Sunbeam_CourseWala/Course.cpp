// Course.cpp

#include "Course.h"
Course::Course(){
       courseName = "";
       courseFees = 0;
}

Course::Course(const std::string courseName,const double courseFees){

    this->courseName = courseName;
    this->courseFees = courseFees;

}


std::string Course::getCourseName() const {
    return courseName;
}



double Course::getCourseFees() const {
    return courseFees;
}
