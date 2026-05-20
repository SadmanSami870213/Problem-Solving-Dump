#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> N(n);
    int freq[101] = {0};
    int count = 0;
    
    for(int i=0; i<n; i++){
        cin >> N[i];
        freq[N[i]]++;
    }

    for(int i=0; i<n; i++){
        if(i==x){
            continue;
        }
        if(freq[i]==0){
            count++;
        }
    }
    if(freq[x]==1){
        count++;
    }
    cout << count << endl;
    return 0;
}