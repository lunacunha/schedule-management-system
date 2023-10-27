//
// Created by marta on 27/10/2023.
//

#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu(){}

void Menu::start() {
    bool run = true;

    while (run == true) {
        cout << "........................................................\n"
             << "........................................................\n";
        cout << "O que pretende fazer?\n"
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
    cout << "A quais dados quer aceder? \n"
         << "1- horário de um estudante \n"
         << "2- horário de uma turma \n"
         << "3- horário de uma UC \n"
         << "2- horário da turma de uma UC específica \n"
         << "3- horário de todos os  estudantes de uma turma \n";
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

void Menu::option1(){

}

void Menu::option2(){

}

void Menu::option3(){

}
void Menu::option4(){

}

void Menu::option5(){

}


void Menu::mudarData(){

}
