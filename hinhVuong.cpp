#include <iostream>

using namespace std;

int main(){
    int A, B, minK = 10, maxK = 20;
    cin >> A >> B;
    int minDT = A*B;
    while(maxK >= minK){
        int num = A*A/(maxK*maxK);
        int dienTich = num*maxK*maxK;
        int hieu = A*B - dienTich;
        if(hieu < minDT){
            minDT = hieu;
        }
        if(B*(maxK-1) - 2*(maxK-1)*(maxK-1) <= 0 && A*(maxK-1) - 2*(maxK-1)*(maxK-1) <= 0) break;
        maxK--;
    }
    cout << minDT;
    return 0;
}