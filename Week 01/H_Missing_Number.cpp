#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int N, SumC=0, SumT;
    cin >> N;

    for(int i=0; i<(N-1); i++){
        int X;
        cin >> X;
        SumC += X;
    }
    SumT = (long long int)(N*(N+1))/2;
    cout << SumT - SumC << endl;
    return 0;
}