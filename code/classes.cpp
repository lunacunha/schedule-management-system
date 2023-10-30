//
// Created by Luna on 25/10/2023.
//

#include "classes.h"



//informações sobre as classes
// dados sobre as turmas: código da UC; código da turma; dia; hora_começo; duração; tipo (T,TP,PL); horário


// funções const

// const strings todas

// getters para os dados necessários de cada turma


Classes::Classes(const string &day_of_class, const string &start_of_class, const string &duration_of_class, const string &type_of_class) {
    this->day_of_class = day_of_class;
    this->start_of_class = start_of_class;
    this->duration_of_class = duration_of_class;
    this->type_of_class = type_of_class;
}

const string Classes::get_day_of_class() {
    return day_of_class;
}

const string Classes::get_start_of_class() {
    return start_of_class;
}

const string Classes::get_duration_of_class() {
    return duration_of_class;
}

const string Classes::get_type_of_class() {
    return type_of_class;
}

void Classes::add_to_list(Classes classes) {
}

void Classes::set_uc_code(const string& uc) {
    uc_code = uc;
}

void Classes::set_class_code(const string& classCode) {
    class_code = classCode;
}