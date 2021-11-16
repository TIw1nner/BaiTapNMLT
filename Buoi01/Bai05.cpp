#include <iostream>

using namespace std;

int main(){
    int gio, phut, giay;
    cout << "Hay nhap vao so gio: ";
    cin >> gio;
    cout << "Hay nhap vao so phut: ";
    cin >> phut;
    cout << "Hay nhap vao so giay: ";
    cin >> giay;
    cout << "Tong so giay la " << (gio*3600) + (phut*60) + giay;
}
