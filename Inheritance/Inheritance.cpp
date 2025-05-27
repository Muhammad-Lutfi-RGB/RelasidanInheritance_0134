#include <iostream>
#include <string>
using namespace std;

class orang {
    public:
    string nama;

    orang (string pNama) : nama(pNama) {
        cout << "Orang dibuat\n";
    }
    ~orang() {
        cout << "orang dihapus\n";
    }

    int jumlah(int a, int b) {
        return a + b;
    }

};

class pelajar : public orang {
    public:
    string sekolah;

    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah (pSekolah){
        cout << "Pelajar Dibuat\n" << endl;
    }
    ~pelajar() {
        cout << "Pelajar Dihapus" << endl;
    }
    string perkenalan () {
        return "Hallo nama saya " + nama + "dari sekolah " + sekolah + "\n \n";
    }
};