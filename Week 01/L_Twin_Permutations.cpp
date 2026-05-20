#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n), index(n+1);

        for(int i=0; i<n; i++){
            cin >> a[i];
            index[a[i]] = i;
        }
        int val = n;
        for(int x=1; x<=n; x++){
            int idx = index[x];
            b[idx] = val;
            val--;
        }
        for(int i=0; i<n; i++){
            cout << b[i] <<" ";
        }
        cout << endl;
        jjj
        ;jjjj
    }
    return 0;
}