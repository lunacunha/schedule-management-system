//
// Created by Luna on 27/10/2023.
//

#ifndef PROJECT_POSSIBLE_OPERATIONS_H
#define PROJECT_POSSIBLE_OPERATIONS_H

#include <iostream>
#include <set>
#include <list>
#include "students.h"
#include "classes.h"
using namespace std;

class possible_operations {
public:
    possible_operations();

    // operações
    void remove_students_from_uc(Students student, string uc_code, string class_code);
    void add_students_to_uc(Students student, string uc_code, string class_code);
    void switch_students_uc(Students student, string uc_code, string class_code);


    bool verify_preconditions(Students student, string uc_code, string class_code);

    void setStudents(set<Students> students);


};


#endif //PROJECT_POSSIBLE_OPERATIONS_H
