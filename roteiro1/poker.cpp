#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    while(N-- > 0){
        vector<int> cartas(5);
        for(int i = 0; i < 5; i++){
            cartas.push_back(cin.get());
        }
        for(int i = 0; i < 5; i++){
            cout << cartas[i] << " ";
        }
        cout << endl;
    }
    return 0;
}