#include <iostream>

using namespace std;

int main(){
    float b,c;
    cout << "Hay nhap vao 2 he so: " << endl;
    cin >> b >> c;
    float x = -c/b;
    cout << "Nghiem cua phuong trinh " << b << "x + " << c << " = 0 la " << x;
    return 0; 
}