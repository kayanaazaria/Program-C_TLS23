#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "Menghitung Volume Bangun Ruang" << endl;
    cout << "=============================="<< endl;
    cout << endl;
    cout << "A. Hitung Volume Kubus \n";
    cout << "B. Hitung Volume Balok \n";
    cout << "C. Hitung Volume Limas \n";
    cout << "D. Hitung Volume Kerucut \n";
    cout << "E. Hitung Volume Tabung \n";
    cout << "F. Hitung Volume Bola \n";
    cout << endl;
    
    char pilihan;
    float sisi, p_balok, l_balok, t_balok, p_limas, l_limas, t_limas, v_limas, r_kerucut, t_kerucut, r_tabung, t_tabung, r_bola;
    cout << "Pilih operasi hitungan: ";
    cin >> pilihan;

    switch(pilihan){
        case 'A':
        cout << "Panjang sisi kubus: ";
        cin >> sisi;
        cout << "Volume dari kubus dengan panjang sisi " << sisi << " adalah " << pow(sisi,3) << ".";
        break;
        case 'B':
        cout << "Panjang balok: ";
        cin >> p_balok;
        cout << "Lebar balok: ";
        cin >> l_balok;
        cout << "Tinggi balok: ";
        cin >> t_balok;
        cout << "Volume dari balok tersebut adalah " << (p_balok*l_balok*t_balok) <<".";
        break;
        case 'C':
        cout << "Panjang alas limas: ";
        cin >> p_limas;
        cout << "Lebar alas limas: ";
        cin >> l_limas;
        cout << "Tinggi limas: ";
        cin >> t_limas;
        v_limas = ((0.33)*p_limas*l_limas*t_limas);
        cout << "Volume dari limas tersebut adalah " << v_limas <<".";
        break;
        case 'D':
        cout << "Radius alas kerucut: ";
        cin >> r_kerucut;
        cout << "Tinggi kerucut: ";
        cin >> t_kerucut;
        cout << "Volume dari kerucut tersebut adalah " << ((0.33)*(3.14)*pow(r_kerucut,2)*t_kerucut) <<".";
        break;
        case 'E':
        cout << "Radius alas tabung: ";
        cin >> r_tabung;
        cout << "Tinggi tabung: ";
        cin >> t_tabung;
        cout << "Volume tabung tersebut adalah " << ((3.14)*pow(r_tabung,2)*t_tabung) <<".";
        break;
        case 'F':
        cout << "Radius bola: ";
        cin >> r_bola;
        cout << "Volume bola dengan radius " << r_bola << " adalah " << ((1.33)*(3.14)*pow(r_bola,3));
        break;
    }
    return 0;
}
