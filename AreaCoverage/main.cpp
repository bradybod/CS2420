#include <iostream>
using namespace std;

int main() {
    int area = 0;
    int h, w;
    cin >> h >> w;
    int myArray[h][w];
    area = (h*w) * 2;
    for(int x = 0; x < h; x++){
        for(int y = 0; y < w; y++){
            cin >> myArray[x][y];
        }
    }
    for(int x = 0; x < h; x++){
        for(int y = 0; y < w; y++){
            if(myArray[x + 1][y] > myArray[x][y] && x+1 != h){
                area = area + (myArray[x+1][y] - myArray[x][y]);
            }else if(myArray[x + 1][y] < myArray[x][y] && x+1 != h){
                area = area + (myArray[x][y] - myArray[x+1][y]);
            }
            if(myArray[x][y+1] > myArray[x][y] && y+1 != w){
                area = area + (myArray[x][y+1] - myArray[x][y]);
            }else if(myArray[x][y+1] < myArray[x][y] && y+1 != w){
                area = area +(myArray[x][y] - myArray[x][y+1]);
            }
            if(x == 0){area = area + myArray[x][y];}
            if(y == 0){area = area + myArray[x][y];}
            if(x == h-1){area = area + myArray[x][y];}
            if(y == w-1){area = area + myArray[x][y];}
        }
    }
    cout << area << endl;
    return 0;
}