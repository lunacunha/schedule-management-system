//
// Created by Luna on 27/10/2023.
//

#include "possible_operations.h"
#include "students.h"
#include <set>

/*
 operações possiveis:
 - remover alunos de uma uc/turma
 - adicionar alunos a um uc/turma
 - mudar alunos de uc/turma
 */


// VOID porque não vai retornar nada -> só vai mudar os valores

//não é preciso saber o número de vagas em cada uc e em cada class?

void possible_operations::remove_students_from_uc(Students students, string uc_code, string class_code) {

    //faltam os getters (???)

    // if remove_students for escolhido no menu

    set<Students> vetor_final; //depois de se remover o aluno

    // student_atual é o student na posição i -> o student por estamos a passar com o nosso loop
    // temos de por Students& para nao estar sempre a criar cópias ou não é preciso?
    for (Students& student_atual : students) {
        // vê se o up do student atual é igual ao up do student passado como argumento
        if (student_atual.get_up_number() == students.get_up_number()) {
            student_atual.remove_students_from_uc(uc_code, class_code);
            //quando chegamos ao student que queremos remover
        }
        else {
            vetor_final.insert(student_atual); //todos os estudantes não removidos têm de estar no vetor final
        }
    }

    //




}


void possible_operations::add_students_to_uc() {

}

void possible_operations::switch_students_uc() {

}

possible_operations::possible_operations() {}
