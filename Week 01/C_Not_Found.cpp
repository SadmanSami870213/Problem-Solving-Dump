#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int Flag = 0;
    int A[26] = {0};
    for(int i=0; i<S.length(); i++){
        int ch; 
        ch = (int)S[i];
        A[ch - 97]++;    
    }
    for(int i=0; i<26; i++){
        if(A[i] == 0){
            cout << (char)(i+97);
            Flag = 1;
            break;
        } 
    }
    if(!Flag){
        cout << "None" << endl;
    }
    return 0;
}