//
// Created by Luna on 25/10/2023.
//

#ifndef PROJECT_STUDENTS_H
#define PROJECT_STUDENTS_H

#include <iostream>
// #inlcude <string> - é preciso pôr isto?
using namespace std;

class Students {

private:
    string student_name;
    string student_schedule;

public:
    const string get_student_name();
    const string get_student_schedule();
};


#endif //PROJECT_STUDENTS_H
