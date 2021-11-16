#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a,b;
    cout << "Hay nhap vao 2 so: " << endl;
    cin >> a >> b;
    float tu = ((a+b)/(pow(a,1.0/3)+pow(b,1.0/3))) - pow(a*b,1.0/3);
    float mau = (pow(a,1.0/3) - pow(b,1.0/3)) * (pow(a,1.0/3) - pow(b,1.0/3));
    float ketqua = tu/mau;
    cout << "Ket qua la " << ketqua;
    return 0;
}
