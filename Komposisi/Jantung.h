#ifndef JANTUNG_H
#define JANTUNG_H
#include <iostream>
using namespace std;

class jantung {
    public:
    jantung () {
        cout << "Jantung Ditambahkan\n";
    }
    ~jantung() {
        cout << "Jantung Dimatikan\n";
    }
};
#endif