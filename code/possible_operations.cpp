//
// Created by Luna on 27/10/2023.
//

#include "possible_operations.h"
#include "students.h"
#include "classes.h"
#include <set>

/*
 operações possiveis:
 - remover alunos de uma uc/turma
 - adicionar alunos a um uc/turma
 - mudar alunos de uc/turma
 */


// VOID porque não vai retornar nada -> só vai mudar os valores

//não é preciso saber o número de vagas em cada uc e em cada class?


/*
const set<Students> possible_operations::getStudents() {
    return students;
} */


possible_operations::possible_operations() {}



void remove_students_from_uc(Student* student, string uc_code, string class_code) {

    list<Classes> lista_classes = {};
    bool is_valid = false;

    for (Classes class_uc : student->get_name()) {
        //class_uc - class
        if (class_code == class_uc.get_class_code() && uc_code == class_uc.get_uc_code()){
            is_valid = true;
        }
        else {
            lista_classes.push_back(class_uc);
        }
    }
    student.setClasses(lista_classes);

    if (is_valid = false) {
        cout << "Esse input não é válido. \n"
    }
    else {
        cout << student->get_name() << "(" << student->get_up_number() << ") já não parte da UC/Class.\n"
    }

    

    // student_atual é o student na posição i -> o student por estamos a passar com o nosso loop
    // temos de por Students& para nao estar sempre a criar cópias ou não é preciso?
    
    Students student = getStudents();
    set<Students*> novos_students; //conjuntos final depois de se remover o aluno
     
    for (Students* student_atual : student) {
        // vê se o up do student atual é igual ao up do student passado como argumento
        if (student_atual -> get_up_number() == student -> get_up_number()) {
            continue;
            //quando chegamos ao student que queremos remover
        }
        else {
            novos_students.insert(student_atual); //todos os estudantes não removidos têm de estar no vetor final
        }
    }
    setStudents(novos_students); //passa a ser o "oficial"

}

/*
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
}*/

void possible_operations::add_students_to_uc(Students* student, string uc_code, string class_code) {

    set<Students*> vetor_final;
    set<Classes*> set_classes = student -> get_class_code();
    set<Classes*> set_final_classes; //novo set onde vamos add os elementos que queremos

    for (Classes* each_class : set_classes) {
        if (each_class -> get_class_code() == class_code && each_class -> get_uc_code() == uc_code) {
            set_final_classes.insert(each_class);
        }

        student -> setClasses(set_final_classes);

        for (Students* student_atual : students) {
            if (student_atual -> get_up_number() == student -> get_up_number()) {
                vetor_final.insert(student);
            }
            else {
                add_students_to_uc(student_atual, uc_code, class_code);
            }
        }
        setStudents(vetor_final);
    }}

void possible_operations::switch_students_uc(Students* student, string uc_code, string class_code) { }

/*
 1º contamos os estudantes numa class/uc
 2º verficamos se os requisitos são todos cumpridos

 - um estudante só pode estar numa class por uc
 - um estudante só pode ser add a uma class se a class tiver vaga
 - "" "" se não perturbar o balance da class ocupation: a diferença entre o numero de students em
 qualquer class tem de ser < ou = a 4
 - não pode haver conflito entre o schedule do estudante e o schedule da nova class

 */

// função para contar os alunos inscritos numa class e uc
int count_students(string uc_code, string class_code) {

    int count_students = 0;

    set<Students*> students = getStudents();

    for (Students student_atual : students) { //para cada estudante
        for (Classes student_class : student_atual.get_class_code()) { //para todas as turmas associadas ao estudante em que estamos (student_atual)
            if (student_class.get_uc_code() == uc_code && student_class.get_class_code() == class_code) {
                count_students = count_students + 1;
            }
        }
    }

    return count_students;
}




// função para verificar se os requisitos estão todos a ser cumpridos
bool verify_preconditions(Students student, string uc_code, string class_code) {


};









