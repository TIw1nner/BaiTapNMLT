#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a,b,c;
    cout << "Hay nhap vao 3 so: " << endl;
    cin >> a >> b >> c;
    int maxAB = ((a+b) + abs(a-b))/2;
    int maxAC = ((a+c) + abs(a-c))/2;
    int maxABC = ((maxAB+maxAC) + abs(maxAB-maxAC))/2;
    int minAB = ((a+b) - abs(a-b))/2;
    int minAC = ((a+c) - abs(a-c))/2;
    int minABC = ((minAB+minAC) - abs(minAB-minAC))/2;
    cout << "So lon nhat la " << maxABC << endl;
    cout << "So be nhat la " << minABC << endl;
    return 0;
}