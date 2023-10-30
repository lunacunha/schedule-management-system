//
// Created by Luna on 25/10/2023.
//

#include "classes.h"



//informações sobre as classes
// dados sobre as turmas: código da UC; código da turma; dia; hora_começo; duração; tipo (T,TP,PL); horário


// funções const

// const strings todas

// getters para os dados necessários de cada turma

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
