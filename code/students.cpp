//
// Created by Luna on 25/10/2023.
//

#include "students.h"


//informações sobre os students
//informações a ir buscar: nome; schedule


Students::Students(const string &up_number, const string &student_name) {
    this->up_number = up_number;
    this->student_name = student_name;
}


const string Students::get_student_name() {
    return student_name;
}

const string Students::get_student_schedule() {
    return student_schedule;
}

<<<<<<< HEAD
=======
const string Students::get_student_name() {
    return student_name;
}

void Students::append_uc(const Classes &uc) {
    classes.insert(uc);
}

set<Students*> Students::getStudents() {
    return students;
}
>>>>>>> main
