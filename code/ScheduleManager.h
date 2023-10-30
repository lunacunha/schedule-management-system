//
// Created by marta on 30/10/2023.
//

#ifndef PROJECT_SCHEDULEMANAGER_H
#define PROJECT_SCHEDULEMANAGER_H
#include <string>
#include "Student.h"
#include <vector>
#include <iostream>
using namespace std;

class ScheduleManager {
public:
    vector<Student> get_students();
};

#endif //PROJECT_SCHEDULEMANAGER_H
