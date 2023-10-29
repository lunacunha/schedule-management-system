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

void possible_operations::remove_students_from_uc(Students student, string uc_code, string class_code) {

    //faltam os getters (???)

    // if remove_students for escolhido no menu

    set<Students> vetor_final; //depois de se remover o aluno

    // student_atual é o student na posição i -> o student por estamos a passar com o nosso loop
    // temos de por Students& para nao estar sempre a criar cópias ou não é preciso?
    for (Students& student_atual : student) {
        // vê se o up do student atual é igual ao up do student passado como argumento
        if (student_atual.get_up_number() == student.get_up_number()) {
            student_atual.remove_students_from_uc(uc_code, class_code);
            //quando chegamos ao student que queremos remover
        }
        else {
            vetor_final.insert(student_atual); //todos os estudantes não removidos têm de estar no vetor final
        }
    }
    setStudents(vetor_final); //definir vetor_final como vetor "oficial"

    // ver o que está mal
}


// o processo do add vai ser semelhante ao do remove
void possible_operations::add_students_to_uc(Students student, string uc_code, string class_code) {


    //tentar pôr aqui a addClassUC() do p.r dentro desta função
    
    set<Students> vetor_final; //depois de se add o aluno

    // student_atual é o student na posição i -> o student por estamos a passar com o nosso loop
    for (Students& student_atual : student) {
        // vê se o up do student atual é igual ao up do student passado como argumento
        if (student_atual.get_up_number() == student.get_up_number()) {
            vetor_final.insert(student);
        }
        else {
            student_atual.add_students_to_uc(uc_code, class_code);
            //quando chegamos ao student que queremos add (o seu up ainda não estava no vetor inicial)
        }
    }
    setStudents(vetor_final); //definir vetor_final como vetor "oficial"
}

void possible_operations::switch_students_uc() {

}


// função para verificar se todos os requisitos estão a ser cumpridos
bool verify_preconditions(Students student, string uc_code, string class_code) {

    /*
     - um estudante só pode estar numa class por uc
     - um estudante só pode ser add a uma class se a class tiver vaga
     - "" "" se não perturbar o balance da class ocupation: a diferença entre o numero de students em
     qualquer class tem de ser < ou = a 4
     - não pode haver conflito entre o schedule do estudante e o schedule da nova class

     */

}

possible_operations::possible_operations() {}
