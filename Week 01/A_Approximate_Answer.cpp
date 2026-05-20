#include<bits/stdc++.h>
using namespace std;

int main(){
    int X, Y, K;
    cin >> X >> Y >> K;
    int Sub;
    Sub = X-Y;
    if(Sub < 0){
        Sub *= -1;
    }
    if(Sub <= K){
        cout << "Yes";
    } else {
        cout << "No";
    }mmmm 
    return 0;
}