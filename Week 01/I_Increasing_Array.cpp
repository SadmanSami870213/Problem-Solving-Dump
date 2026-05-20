#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long int A[N], Count = 0;
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0, j=1; j<N; i++, j++){
        if(A[i]>A[j]){
            int Difference = A[i] - A[j];
            A[j] += Difference;
            Count += Difference;
        } 
    }   
    cout << Count << endl;
    return 0;
}