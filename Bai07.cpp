#include <iostream>
#define PI 3.14

using namespace std;

int main(){
    float banKinh;
    cout << "Hay nhap vao ban kinh: ";
    cin >> banKinh;
    cout << "Chu vi hinh tron la " << 2*PI*banKinh << endl;
    cout << "Dien tich hinh tron la " << PI*banKinh*banKinh;
    return 0;
}