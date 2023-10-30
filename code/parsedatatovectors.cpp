//
// Created by Luna on 25/10/2023.
//

#include "parsedatatovectors.h"
#include "classes.h"
#include "students.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// função para ver os dados do class.csv e passar para vetor

vector<Classes> classes_toVector(const string& classes) {
    
    ifstream file_to_read(classes);
    
    vector<Classes> dataTotal_ucs; //vetor novo com os dados - TOTAL

    string file_lines;
    // percorre linha a linha
    while (getline(file_to_read, file_lines)) {
        istringstream ss(file_lines);
        vector<string> dataPerLine; // vetor com os campos de 1 só linha

        string elements_each_line;
        // percorre elementos de uma linha
        while (getline(ss, elements_each_line, ',')) {
            dataPerLine.push_back(elements_each_line); // adiciona os valores de cada linha ao vetor com os campos de uma só linha
        }

        string class_code = dataPerLine[0];
        string uc_code = dataPerLine[1];
        string day_of_class = dataPerLine[2];
        string start_of_class = dataPerLine[3];
        string duration_of_class = dataPerLine[4];
        string type_of_class = dataPerLine[5];

        Classes new_class = Classes(day_of_class, start_of_class, duration_of_class, type_of_class);

        bool uc_na_lista = false;
        for (Classes& uc : dataTotal_ucs) {
            if (class_code == uc.get_class_code() && uc_code == uc.get_uc_code()) {
                uc.add_to_list(new_class);
                uc_na_lista = true;
            }
        }
        
        if (uc_na_lista == false) {
            new_class.set_uc_code(uc_code);
            new_class.set_class_code(class_code);
            dataTotal_ucs.push_back(new_class);
        }
    }

    file_to_read.close();

    return dataTotal_ucs;
}


// parse data do file students_classes.csv

vector<Students> students_classes_toVector(const string& students_classes, const vector<Classes>& ucs) {
    

    vector<Classes> dataTotal_ucs = classes_toVector("classes.csv");


    ifstream file_to_read(students_classes);

    vector<Students> dataTotal_students; //vetor novo com os dados - TOTAL

    string file_lines;
    // percorre linha a linha
    while (getline(file_to_read, file_lines)) {
        istringstream ss(file_lines);
        vector<string> dataPerLine; // vetor com os campos de 1 só linha

        string elements_each_line;
        // percorre elementos de uma linha
        while (getline(ss, elements_each_line, ',')) {
            dataPerLine.push_back(elements_each_line); // adiciona os valores de cada linha ao vetor com os campos de uma só linha
        }

        string up_number = dataPerLine[0];
        string student_name = dataPerLine[1];
        string uc_code = dataPerLine[2];
        string class_code = dataPerLine[3];

        Students new_student = Students(up_number, student_name);

        for (Classes& uc : dataTotal_ucs) {
            if (class_code == uc.get_class_code() && uc_code == uc.get_uc_code()) {
                new_student.append_uc(uc);
            }
        }

        dataTotal_students.push_back(new_student);

        //resolver isto
    }

    file_to_read.close();

    return dataTotal_students;
}



