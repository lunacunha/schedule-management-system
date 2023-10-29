//
// Created by Luna on 25/10/2023.
//

#ifndef PROJECT_STUDENTS_H
#define PROJECT_STUDENTS_H

#include <iostream>
#include "classes.h"
#include "students.h"
#include "possible_operations.h"
using namespace std;

class Students {

private:
    string class_code;
    string uc_code;
    string up_number;
    string student_name;

public:
    const string get_class_code();
    const string get_uc_code();
    const string get_up_number();
    const string get_student_name();

}

;


#endif //PROJECT_STUDENTS_H
