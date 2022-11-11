#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    while(N-- > 0){
        string palavra;
        cin >> palavra;
        for(int c = 0; c < palavra.size(); c++){
            palavra[c] = tolower(palavra[c]);
            string teste(palavra.begin()+1, palavra.end());
            if(teste.find(c) != string::npos){
                cout << palavra << ": N" << endl;
                continue;
            }
        }
        string ordenada = palavra;
        sort(ordenada.begin(), ordenada.end());
        cout << palavra << ": " << (palavra == ordenada ? "O" : "N") << endl;
    }
    return 0;
}