//
// Created by Dawid on 03/05/2022.
//

#ifndef BIBLIOTEKA_USERS_H
#define BIBLIOTEKA_USERS_H

using namespace std;

class users {
public:
    static string name, lastname, userID, answer, in, out;
    static void copyFile(string in, string out);
    static void addUserFF();

    void addUsers();
};



#endif //BIBLIOTEKA_USERS_H
