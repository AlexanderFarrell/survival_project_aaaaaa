//
// Created by Alexander Farrell on 10/29/22.
//

#include "student.h"
#include <iostream>

Student::Student(const std::string &first_name, const std::string &last_name, float gpa) : first_name(first_name),
                                                                                           last_name(last_name),
                                                                                           gpa(gpa) {}

void Student::display() {
    std::cout << this->first_name << " " << this->last_name << std::endl << "GPA: " << this->gpa << std::endl;
}
