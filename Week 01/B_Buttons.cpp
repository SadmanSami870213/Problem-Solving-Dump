#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C=2;
    cin >> A >> B;
    int Sum = 0;
    while(C--){
      if(A>=B){
        Sum += A;
        A--;
      } else {
        Sum += B;
        B--;
      }
    }
    cout << Sum << endl; 
    return 0;
}