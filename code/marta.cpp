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

