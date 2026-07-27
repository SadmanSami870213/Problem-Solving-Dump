#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        
        vector<int> A(N);
        for(int i=0; i<N; i++){
            cin >> A[i];
        }

        for(int i=0; i<N; i++){
            int F;
            string S;
            cin >> F >> S;

            for(int j=F-1; j>=0; j--){
                if(S[j] == 'U'){
                    A[i] = (A[i] + 9) % 10;
                } else {
                    A[i] = (A[i] + 1) % 10;
                }
            }
        }
        for(int i=0; i<N; i++){
            cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}