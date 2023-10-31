//
// Created by Luna on 25/10/2023.
//

#ifndef PROJECT_CLASSES_H
#define PROJECT_CLASSES_H

#include <iostream>
#include <string>
#include "students.h"
#include "possible_operations.h"

using namespace std;


class Classes {

    private:
        string day_of_class;
        string start_of_class;
        string duration_of_class;
        string type_of_class;

        string uc_code;
        string class_code;

    public:

    Classes(const string &day_of_class, const string &start_of_class, const string &duration_of_class, const string &type_of_class);

        const string get_day_of_class();
        const string get_start_of_class();
        const string get_duration_of_class();
        const string get_type_of_class();

        const string get_uc_code();
        const string get_class_code();

        void add_to_list(Classes classes);

        void set_uc_code(const string& uc);
        void set_class_code(const string& classCode);



}

;



#endif //PROJECT_CLASSES_H
