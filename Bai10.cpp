#include <iostream>

using namespace std;

int main(){
    int soXe;
    cout << "Hay nhap vao so xe cua ban: ";
    cin >> soXe;   
    int soCuoi = soXe %10;
    soXe /= 10;
    int soKeCuoi = soXe %10;
    soXe /= 10;
    int soThuHai = soXe %10;
    soXe /= 10;
    int soDau = soXe %10;
    soXe /= 10;
    cout << "So nut la: ";
    cout << (soCuoi+soKeCuoi+soThuHai+soDau)%10;
    return 0;
}