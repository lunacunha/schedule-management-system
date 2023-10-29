//
// Created by Luna on 25/10/2023.
//

#include "parsedatatovectors.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// função para ver os dados do class.csv e passar para vetor

vector<vector<string>> classes_toVector(const string& classes) {
    ifstream file_to_read("classes.csv");
    vector<vector<string>> dataTotal; //vetor novo com os dados - TOTAL

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

        dataTotal.push_back(dataPerLine); //adiciona os vetores de cada linha ao vetor maior
    }

    file_to_read.close();

    return dataTotal;
}


// temos de fazer estas funções para cada ficheiro csv ? ou dá a mesma para todos?
// a duvida é que os vetores de cada linha de classes.csv têm mais campos do que as linhas da classes_per_uc.csv
// não dá erro?


// parse data do file students_classes.csv

vector<vector<string>> students_classes_toVector(const string& students_classes) {
    ifstream file_to_read("students_classes.csv");
    vector<vector<string>> dataTotal; //vetor novo com os dados - TOTAL

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

        dataTotal.push_back(dataPerLine); //adiciona os vetores de cada linha ao vetor maior
    }

    file_to_read.close();

    return dataTotal;
}



