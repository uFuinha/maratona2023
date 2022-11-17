#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int binary_search(int value, const vector<int> &array, int begin, int end){
    int pos = (end+begin)/2;
    if(begin > end) return -1;
    if(array[pos] == value) return pos;
    if(array[pos] > value) return binary_search(value, array, begin, pos-1);
    return binary_search(value, array, pos+1, end);
}

int main(){
    int N;
    int max;
    int triangles;
    while(cin >> N){
        max = 0;
        triangles = 0;

        vector<int> accumulatedArcs(N);
        int aux;
        for(int i = 0; i < N; i++){
            cin >> aux;
            max += aux;
            accumulatedArcs[i] = max;
        }

        FILE* out = fopen("./output.txt", "a+");

        if(max % 3 != 0) fprintf(out, "%d\n", 0);//cout << 0 << endl;
        else{
            for(int i = 0; i < N; i++){
                int sum = accumulatedArcs[i];
                int sides = 1;
                while(sum <= max){
                    sum += N;
                    if(binary_search(sum, accumulatedArcs, 0, N-1) == -1)
                        break;
                    sides += 1;
                }
                if(sides == 3) 
                    triangles++;
            }
            fprintf(out, "%d\n", triangles);
            //cout << triangles << endl;
        }
    }
    return 0;
}