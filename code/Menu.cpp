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

}

void Menu::mudarData(){

}
