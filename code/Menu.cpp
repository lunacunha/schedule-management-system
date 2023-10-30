//
// Created by marta on 27/10/2023.
//

#include "Menu.h"
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

//para usar nas perguntas para fazer ao user

string toLower(string str){ //passar strings para minusculas
    for (auto& elem : str){ //permite alterar a str original o auto
        elem = tolower(elem);}
    return str;
}

string toUpper(string str){ //passar strings para maiusculas
    for (auto& elem : str){
        elem = toupper(elem);}
    return str;
}

Menu::Menu(){}

void Menu::start() {
    bool run = true;

    while (run == true) {
        cout << "........................................................\n"
             << "........................................................\n";
        cout << "O que pretende fazer?\n\n"
             << "1- Aceder a dados \n"
             << "2- Alterar dados \n"
             << "Q- Sair \n";

        string option;
        cout << endl << "Escolha uma opção:";
        cin >> option;

        if (option == "1") acessoData();
        else if (option == "2") mudarData();

        else if (option == "q" || option == "Q"){
            cout << "........................................................\n"
                 << "........................................................\n";
            run = false;}
        else {cout << "O input inserido não é válido\n";}
    }
}

void Menu::acessoData() {
    cout << "........................................................\n";
    cout << "A quais dados quer aceder? \n\n"
         << "1- horário de um estudante \n"
         << "2- horário de uma turma \n"
         << "3- horário de uma UC \n"
         << "4- UC com mais estudantes inscritos \n"
         << "5- número de estudantes de uma turma \n";

    string option;
    cout << endl << "Escolha uma opção:";
    cin >> option;

    if (option =="1") option1();
    else if (option == "2") option2();
    else if (option == "3") option3();
    else if (option == "4") option4();
    else if (option == "5") option5();
    else {cout << "O input inserido não é válido\n";}
    cout << endl;
}

void Menu::mudarData() {
    cout << "........................................................\n";
    cout << "Que dados pretende alterar? \n\n"
         << "1- mudar estudante de turma \n"
         << "2- remover estudantes de uma UC/turma \n"
         << "3- adicionar estudante a uma UC/turma \n"

    string option;
    cout << endl << "Escolha uma opção:";
    cin >> option;

    if (option =="1") option1mudar();
    else if (option == "2") option2mudar();
    else if (option == "3") option3mudar();
    else {cout << "O input inserido não é válido\n";}
    cout << endl;
}

void Menu::option1(){ //falta criar as opcoes diferentes

}

void Menu::option2(){

}

void Menu::option3(){

}
void Menu::option4(){

}

void Menu::option5(){

}


void Menu::option1mudar(){

}

void Menu::option2mudar(){

}

void Menu::option3mudar(){

}