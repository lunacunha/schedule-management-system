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
#include <string>
#include <vector>
#include "Menu.h"
#include "possible_operations.h"

using namespace std;

class possible_operations {
<<<<<<< HEAD

    public:
    vector<students> get_students();
    possible_operations();

    // operações
        void remove_students_from_uc(Students* student, string uc_code, string class_code);
        void add_students_to_uc(Students* student, string uc_code, string class_code);
        void switch_students_uc(Students* student, string uc_code, string class_code);

        bool verify_preconditions(Students* student, string uc_code, string class_code);

        void setStudents(set<Students*> students);
        void setClasses(set<Classes*> classes);
=======
public:
    //possible_operations();

    // operações
    void remove_students_from_uc(Student* student, string uc_code, string class_code);
    void add_students_to_uc(Student* student, string uc_code, string class_code);
    void switch_students_uc(Student* student, string uc_code, string class_code);

    bool verify_preconditions(Student* student, string uc_code, string class_code);

    void setStudents(set<Student*> students);
    void setClasses(set<Classes*> classes);
>>>>>>> 63a7c1f37de2c2958e1b60653098e267a1ee5b90

        set<Students*> getStudents();
        set<Classes*> getClasses();
        // é preciso pôr const?
    
    private: 
        set<Students*> students;

};

// NOTA: pomos * nos Students pq queremos ir buscar os elementos e não fazer cópias


#endif //PROJECT_POSSIBLE_OPERATIONS_H
