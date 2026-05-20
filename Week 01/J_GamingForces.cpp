#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    while(N--){
       int x, count = 0;
       cin >> x;
       int A[x];
       for(int i=0; i<x; i++){
        cin >> A[i];
       } 
       for(int i=0; i<x; i++){
        if(A[i]>1){
            A[i] = 0;
            count++;
        }
       }
       int One = 0;
       for(int i=0; i<x; i++){
        if(A[i]==1){
            One++;
        }
       }
       if(One%2 == 0){
        count += (One/2);
       } else {
        count += (One/2);
        count++;
       }
       cout << count << endl;
    }
    return 0;
}
