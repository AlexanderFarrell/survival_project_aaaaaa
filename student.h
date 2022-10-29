//
// Created by Alexander Farrell on 10/29/22.
//

#ifndef SURVIVAL_PROJECT_STUDENT_H
#define SURVIVAL_PROJECT_STUDENT_H

#include <string>

class Student {
private:
    std::string first_name;
    std::string last_name;
    float gpa;

public:
    Student(const std::string &first_name, const std::string &last_name, float gpa);
    void display();
};


#endif //SURVIVAL_PROJECT_STUDENT_H
