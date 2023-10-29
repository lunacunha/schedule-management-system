//
// Created by Luna on 27/10/2023.
//

#ifndef PROJECT_POSSIBLE_OPERATIONS_H
#define PROJECT_POSSIBLE_OPERATIONS_H

#include <iostream>
#include <set>
#include "students.h"
using namespace std;

class possible_operations {
public:
    possible_operations();

    void remove_students_from_uc(Students student, string uc_code, string class_code);
    void add_students_to_uc(Students student, string uc_code, string class_code);
    void switch_students_uc();

    void setStudents(set<Students> students);


};


#endif //PROJECT_POSSIBLE_OPERATIONS_H
