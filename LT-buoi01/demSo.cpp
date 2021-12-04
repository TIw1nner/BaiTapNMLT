#include <iostream>

using namespace std;

int main(){
    int N,K,D, dem = 0;
    cin >> N >> K >> D;
    for(int A = 1; A <= N; A++){
        if((A*K)%D == 0) dem++;
    }
    cout << dem;
    return 0;
}