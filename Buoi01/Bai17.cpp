#include <iostream>

using namespace std;

int main(){
    int gio,phut,giay;
    char h,p,s;
    cout << "Hay nhap thoi gian vao: ";
    cin >> gio;
    cin >> h;
    cin >> phut;
    cin >> p;
    cin >> giay;
    cin >> s;
    cout << "So giay la " << gio*3600 + phut *60 + giay;
    return 0;
}
