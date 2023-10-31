//
// Created by Luna on 25/10/2023.
//

#ifndef PROJECT_PARSEDATATOVECTORS_H
#define PROJECT_PARSEDATATOVECTORS_H

#include <vector>
#include <string>
#include "classes.h"
#include "students.h"
using namespace std;

class ParseDataToVectors {
    public:
        ParseDataToVectors();

        vector<Classes> classes_toVector(const string& classes);
        vector<Students> students_classes_toVector(const string& students_classes, const vector<Classes>& ucs);
};

#endif //PROJECT_PARSEDATATOVECTORS_H
