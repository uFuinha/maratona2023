#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define index(a, i) find(all(a), i) - a.begin();

int main(){
    int N;
    while(cin >> N){
        vector<int> largada(N);
        vector<int> chegada(N);

        for(int i = 0; i < N; i++) cin >> largada[i];
        for(int i = 0; i < N; i++) cin >> chegada[i]; 

        int ultrapassagens = 0;
        for(int i = 0; i < N; i++){
            int posInicial = index(largada, chegada[i]);
            int tmp = chegada[i];
            chegada.erase(chegada.begin()+i);
            chegada.insert(chegada.begin()+posInicial, tmp);
            for(int c = 0; c < N; c++) cout << chegada[c] << " "; cout << endl;
            ultrapassagens += abs(posInicial - i);
            if(chegada == largada)
                break;
        }
        cout << ultrapassagens << endl;
    }
    return 0;
}