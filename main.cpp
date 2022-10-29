#include <iostream>

#include <vector>
#include "student.h"

int main() {
    std::vector<Student*> students;
    bool running = true;

    while (running) {

        for (auto a: students) {
            a->display();
        }

        std::cout << "Please choose an option" << std::endl;
        std::cout << "  a - add" << std::endl;
        std::cout << "  q - quit" << std::endl;

        std::string first = "";
        std::string last = "";
        float gpa = 0.0f;


        char i;
        std::cin >> i;

        switch (i) {
            case 'a':
                fflush(stdin);

                std::cout << "Enter first name: " << std::endl;
                std::getline(std::cin, first);

                std::cout << "Enter last name: " << std::endl;
                std::getline(std::cin, last);

                std::cout << "Enter GPA: " << std::endl;
                std::cin >> gpa;

                students.push_back(new Student(first, last, gpa));

                break;
            case 'q':
                running = false;
                break;
            default:
                std::cout << "Invalid option" << std::endl;
                break;
        }
    }
}
