#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, q;
    string memoria;
    string sequencia;
    while(true){
        cin >> N;
        if(N == 0) break;

        memoria.clear();
        q = 0;

        for(int i = 0; i < N; i++){
            cin >> sequencia;
            if(memoria.find(sequencia) == string::npos){
                sequencia.append(sequencia);
                memoria.append(sequencia);
                q++;
            }
        }

        cout << q << endl;
    }
    return 0;
}