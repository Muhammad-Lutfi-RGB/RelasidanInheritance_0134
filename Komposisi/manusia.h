#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;
#include <iostream>

class Manusia {
    public:
    string name;
    jantung varJantung;

    Manusia(string pName): name(pName){
        cout << name << "Hidup\n";
    }
    ~Manusia(){
        cout << name << "Mati\n";
    }
};
#endif