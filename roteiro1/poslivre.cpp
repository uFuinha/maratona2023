#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int W, H, N;
    int teste = 0;
    while(++teste){
        cin >> W;
        cin >> H;
        cin >> N;
        if(W == 0 || H == 0) break;
        
        char tabuleiro[W][H];
        for(int i = 0; i < H; i++)
            for(int j = 0; j < W; j++)
                tabuleiro[i][j] = '-';

        for(int i = 0; i < N; i++){
            int x1, x2, y1, y2;
            cin >> x1; cin >> y1;
            cin >> x2; cin >> y2;

            for(int X = min(x1, x2); X <= max(x1, x2); X++)
                for(int Y = min(y1, y2); Y <= max(y1, y2); Y++)
                    tabuleiro[Y-1][X-1] = '*';
        }

        int contador = 0;
        for(int i = 0; i < H; i++)
            for(int j = 0; j < W; j++)
                if(tabuleiro[i][j] == '*') contador++;
        
        if(H*W - contador == 0) cout << "There is no empty spots." << endl;
        else cout << "There is " << H*W - contador << " empty spots." << endl;
    }
    return 0;
}