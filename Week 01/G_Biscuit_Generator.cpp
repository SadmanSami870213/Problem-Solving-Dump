#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, T, Biscuit = 0;
    cin >> A >> B >> T;
    for(int i=1; i<=T; i++){
        if(i%A == 0){
            Biscuit += B;
        }
    }
    cout << Biscuit << endl;
    return 0;
}