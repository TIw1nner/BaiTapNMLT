#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a = pow(32,0.2);
    double b = pow(1.0/64,-0.25);
    double c = sqrt(8.0/27);
    double A = a - b + c;
    cout << "A = " << A << endl;
    return 0;
}
