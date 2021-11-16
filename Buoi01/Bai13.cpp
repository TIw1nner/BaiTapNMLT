#include <iostream>

using namespace std;

int main(){
    int ngay, thang, nam;
    cout << "Nhap ngay sinh: ";
    cin >> ngay;
    cout << "Nhap thang sinh: ";
    cin >> thang;
    cout << "Nhap nam sinh: ";
    cin >> nam;
    cout << "a) " << ngay << "/" << thang << "/" << nam << endl;
    cout << "b) " << ngay << "/" << thang << "/" << nam%100 << endl;
    cout << "c) " << nam << "/" << thang << "/" << ngay;


}
