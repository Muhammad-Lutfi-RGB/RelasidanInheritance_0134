#include <iostream>
#include <vector>
using namespace std;

class dokter;

class pasien{
    public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama): nama(pNama){
        cout << "Pasien \"" << nama << "\" ada\n"; 
    }
    ~pasien() {
        cout << "Pasien \"" << nama
        << "\" tidak ada\n";
    }

    void TambahDokter(dokter*);
    void cetakDokter();
};

class dokter {
    public:
    string nama;
    vector<pasien*> daftar_pasien;

    dokter(string pNama): nama(pNama) {
        cout << "Dokter \"" << "\" ada\n";
    }
    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }
    void tambahPasien(pasien*);
    void cetakPasion();
};

void pasien::TambahDokter(dokter* pDokter) {
    daftar_dokter.push_back(pDokter);
}

void pasien::cetakDokter(){
    cout << "Daftar dokter yang menangani pasien \""
    << this->nama << "\":\n";
    //auto digunakan dalam perulangan
    for (auto& a : daftar_dokter) {
        cout << a->nama << "\n";
    }
    cout << endl;
}

int main(){
    dokter* varDokter1 = new dokter ("dr.Budi");
    dokter* varDokter2 = new dokter ("dr.Tono");
    pasien* varPasien1 = new pasien ("Andi");
    pasien* varPasien2 = new pasien ("Lia");
}