#include <iostream>
using namespace std;

double rerata (double a, double b) {
    return (a+b) / 2;
}

string status (double c) {
    if ( c >= 60)
        return "LULUS";
    else 
        return "GAGAL";
}

int main () {
    double nilM,nilB;
    //double rata;
    //string st;
    cout << "Masukan nilai Matematika= ";
    cin >> nilM;
    cout << "Masukan nilai Bahasa Indonesia";
    cin >> nilB;
    //rata = renata(nilM,nilB);
    cout << "Status kelulusan = " << status(rerata(nilM,nilB));
    return 0;
}