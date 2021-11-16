#include <iostream>

using namespace std;

int main(){
    float canNang, chieuCao;
    cout << "Hay nhap vao can nang: ";
    cin >> canNang;
    cout << "Hay nhap vao chieu cao: ";
    cin >> chieuCao;
    cout << "Chi so BMI cua ban la " << canNang/(chieuCao*chieuCao);
    return 0;
}