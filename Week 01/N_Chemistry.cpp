#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int N, K;
        string S;
        cin >> N >> K >> S; 
        
        vector<int> A(26, 0);
        for(char C : S){
            A[C - 'a']++;
        }

        int odd = 0;
        for(int R : A){
            if(R%2 != 0) odd++;
        }
        int left = N-K;
        int allowed = left % 2;

        if(odd <= allowed+K) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}