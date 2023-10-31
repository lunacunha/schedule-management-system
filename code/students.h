//
// Created by Luna on 25/10/2023.
//

#ifndef PROJECT_STUDENTS_H
#define PROJECT_STUDENTS_H

#include <iostream>
<<<<<<< HEAD

// #inlcude <string> - é preciso pôr isto?

=======
#include "classes.h"
#include "students.h"
#include "possible_operations.h"
>>>>>>> main
using namespace std;

class Students {

private:
<<<<<<< HEAD

    string student_name;
    string student_schedule;

public:
    const string get_student_name();
    const string get_student_schedule();
};
=======
    string class_code;
    string uc_code;
    string up_number;
    string student_name;

    set<Students*> students;
    set<Classes*> classes;

public:

Students(const string &up_number, const string &student_name);

    const string get_class_code();
    const string get_uc_code();
    const string get_up_number();
    const string get_student_name();

    set<Classes*> getClasses();
    set<Students*> getStudents();

    void append_uc(const Classes& uc);
    auto setStudents(set<Students*> students);


}
>>>>>>> main



#endif //PROJECT_STUDENTS_H
