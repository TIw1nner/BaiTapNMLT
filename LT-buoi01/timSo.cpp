#include <iostream>

using namespace std;

int main(){
    int A = 1,N,maxA = 0;
    cin >> N;
    int tongN = 0, tongA = 0, dem = 0, tempN = N;
    for(N; N > 0; N /= 10, dem++) tongN += N % 10;
    if(dem > 1){
        for(int i = 0; i < dem - 1; i++) A *= 10;
    }
    for(tempN--; tempN >= A; tempN--){
        int tempA = tempN;
        tongA = 0;
        for(tempA; tempA > 0; tempA /= 10) tongA += tempA % 10;
        if(tongA == tongN && tempN > maxA) maxA = tempN;
    }
    cout << maxA;
    return 0;
}