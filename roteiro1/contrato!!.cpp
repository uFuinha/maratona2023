#include <bits/stdc++.h>
using namespace std;

int main(){
    char falha;
    while(true){
        cin >> falha;
        if(falha == '0') break;
        string erro;
        cin >> erro;
        int i = 0;
        while(i < erro.size()){
            if(erro[i] == falha) erro.erase(erro.begin()+i);
            else i++;
        }
        cout << (erro.size() == 0 ? 0 : stoul(erro, nullptr, 10)) << endl;
    }
    return 0;
}