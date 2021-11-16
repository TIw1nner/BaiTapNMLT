#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a,b;
    cout << "Hay nhap vao 2 so nguyen: ";
    cin >> a >> b;
    int tong = a + b;
    int tich = a * b;
    int hieu = a - b;
    float thuong = (a*1.0)/b;
    cout << "tong la " << tong << endl << "hieu la " << hieu << endl << "tich la " << tich << endl;
    cout << fixed << setprecision(2) << "thuong la " << thuong;
    return 0;
}