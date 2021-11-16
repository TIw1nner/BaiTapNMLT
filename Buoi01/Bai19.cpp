#include <iostream>

using namespace std;

int main(){
    int gio, phut , giay;
    float tong1 = 0, tong2 = 0, tong = 0, hieu = 0;
    cout << "Nhap so gio dau tien: ";
    cin >> gio;
    tong1 += gio * 3600;
    cout << "Nhap so phut dau tien: ";
    cin >> phut;
    tong1 += phut * 60;
    cout << "Nhap so giay dau tien: ";
    cin >> giay;
    tong1 += giay;
    cout << "Nhap so gio thu hai: ";
    cin >> gio;
    tong2 += gio * 3600;
    cout << "Nhap so phut thu hai: ";
    cin >> phut;
    tong2 += phut * 60;
    cout << "Nhap so giay thu hai: ";
    cin >> giay;
    tong2 += giay;
    tong = tong1 + tong2;
    hieu = abs(tong1 - tong2);
    gio = tong/3600;
    phut = ((tong/3600) - gio)*60;
    giay = (((tong/3600) - gio)*60 - phut)*60;
    cout << " \n";
    cout << "Tong 2 gio la " << gio << " gio " << phut << " phut " << giay << " giay" << endl;
    gio = hieu/3600;
    phut = ((hieu/3600) - gio)*60;
    giay = (((hieu/3600) - gio)*60 - phut)*60;
    cout << "Hieu 2 gio la " << gio << " gio " << phut << " phut " << giay << " giay" << endl;  
    return 0;  
}
