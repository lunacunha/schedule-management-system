//
// Created by Luna on 25/10/2023.
//

#include "students.h"
#include <iostream>
using namespace std;

// Implementações dos métodos da classe Student

Students::Students(const string& upNumber, const string& name) {
}

string Students::get_up_number() const {
    return up_number;
}

string Students::get_name() const {
    return student_name;
}

//informações sobre os students
//informações a ir buscar: nome; schedule


const string Students::get_class_code() {
    return class_code;
}

const string Students::get_uc_code() {
    return uc_code;
}
