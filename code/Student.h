//
// Created by marta on 30/10/2023.
//

#ifndef PROJECT_STUDENT_H
#define PROJECT_STUDENT_H
#include <string>
#include <iostream>
using namespace std;

class Student {
public:
    Student(const std::string& upNumber, const std::string& name);

    string get_up_number() const;
    string get_name() const;

private:
    string up_number;
    string student_name;
};


#endif //PROJECT_STUDENT_H
