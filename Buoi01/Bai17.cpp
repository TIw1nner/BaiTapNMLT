#include <iostream>

using namespace std;

int main(){
    int gio,phut,giay;
    cout << "Hay nhap so gio vao: ";
    cin >> gio;
    cout << "Hay nhap so phut vao: ";
    cin >> phut;
    cout << "Hay nhap so giay vao: ";
    cin >> giay;
    cout << "So giay la " << gio*3600 + phut *60 + giay;
    return 0;
}
