#include <iostream>
using namespace std;

int main() {
    int numTestCases = 0;
    cin >> numTestCases;
    for (int tcNum = 0; tcNum < numTestCases; tcNum++) {
        int h = 0, w = 0;
        cin >> h >> w;
        string array[h];
        for (int x = 0; x < h; x++){
            cin >> array[x];
        }
        int greenCost = 0;
        int redCost = 0;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                //green cost
                //Even and odd
                if((i+1)%2 == 0 && (j+1)%2 == 0){
                    if(array[i][j] != 'G'){
                        greenCost +=5;
                    }
                } else if((i+1)%2 != 0 && (j+1)%2 != 0){
                    if(array[i][j] != 'G'){
                        greenCost +=5;
                    }
                }

                //even odd and odd even
                else if((i+1)%2 == 0 && (j+1)%2 != 0){
                    if(array[i][j] != 'R'){
                        greenCost +=3;
                    }
                }
                else if((i+1)%2 != 0 && (j+1)%2 == 0){
                    if(array[i][j] != 'R'){
                        greenCost +=3;
                    }
                }


                //red cost
                //even and odd
                if((i+1)%2 == 0 && (j+1)%2 == 0){
                    if(array[i][j] != 'R'){
                        redCost +=3;
                    }
                }else if((i+1)%2 != 0 && (j+1)%2 != 0){
                    if(array[i][j] != 'R'){
                        redCost +=3;
                    }
                }

                //even odd and odd even
                else if((i+1)%2 == 0 && (j+1)%2 != 0){
                    if(array[i][j] != 'G'){
                        redCost +=5;
                    }
                }
                else if((i+1)%2 != 0 && (j+1)%2 == 0){
                    if(array[i][j] != 'G'){
                        redCost +=5;
                    }
                }
            }
        }
        if(redCost > greenCost){
            cout << greenCost << endl;
        }else{cout << redCost << endl;}
    }

    return 0;
}
