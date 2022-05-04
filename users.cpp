//
// Created by Dawid on 03/05/2022.
//
#include <cstring>
#include <iostream>
#include <fstream>
#include "users.h"

void users::copyFile(string in, string out) {
    ifstream fin( in) ;
    ofstream fout( out) ;
    fout << fin.rdbuf() ;
}
void users::addUserFF() {
    fstream file_("/Users/Dejw/CLionProjects/biblioteka/data.txt", std::ios_base::in);

    if (file_.is_open()){
        cout << "Nowa lista użytkowników: \n";
        cout << "userID" << " " << "name" << " " << "lastname\n";
        while (file_ >> userID >> name >> lastname){
            cout << userID << " " << name << " " << lastname << endl;
        }
        file_.close();

        ifstream fileUsers_("/Users/Dejw/CLionProjects/biblioteka/users.txt", std::ios_base::out);

        cout<<"Zatwierdź listę użytkowników (y/n): ";
        cin>>answer;

        if (answer == "y" || fileUsers_.is_open()){
            copyFile("/Users/Dejw/CLionProjects/biblioteka/data.txt", "/Users/Dejw/CLionProjects/biblioteka/users.txt");
        }
        if (answer == "n"){
            cout << "Lista użytkowników nie została zatwierdzona";
        }
        else {
            cerr<<"Nie można znaleźć pliku, sprawdź czy na pewno znajduje się w poprawnej lokalizacji\n";
        }

        file_.close();
        fileUsers_.close();
    }
    else{
        cerr<<"Nie można znaleźć pliku, sprawdź czy na pewno znajduje się w poprawnej lokalizacji\n";
    }
}

void users::addUsers() {
    cout << "ręcznie";
}
