#include <iostream>

using namespace std;

int main(){
    int n;
    cout <<"Hay nhap vao so nguyen co 2 chu so: ";
    cin >> n;
    int hangChuc = n /10;
    int hangDonVi = n % 10;
    int tong = hangChuc + hangDonVi;
    cout << "Tong cua 2 chu so la " << tong;
    return 0;
}