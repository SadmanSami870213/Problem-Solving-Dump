#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int Flag = 0;
    for(int i=A; i<=B; i++){
        if(i%C==0){
            cout << i << endl;
            Flag = 1;
            break;
        } 
    }
    if(!Flag){
        cout << -1 << endl;
    }
    return 0;
}