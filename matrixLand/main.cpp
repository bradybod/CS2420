#include <iostream>
using namespace std;

int main() {
    int h, w;
    double maxScore = 0;
    cin >> h >> w;
    int myArry[h][w];
    for(int i = 0; i < h; i++){
        for (int j = 0; j < w; ++j) {
            cin >> myArry[i][j];
        }
    }
    for (int k = 0; k < h;) {
        for (int i = 0; i < w;) {
            if (k != h - 1) {
                int left = 0, right = 0, down = 0;
                if (i != 0) {
                    left = myArry[k][i - 1];
                }
                if (i != w - 1) {
                    right = myArry[k][i + 1];
                }
                if (k != h - 1) {
                    down = myArry[k + 1][i];
                }
                //left
                if (left > right && left > down && left != down && left != 0) {
                    maxScore = maxScore + myArry[k][i];
                    cout << "Left \n";
                    myArry[k][i] = 0;
                    i = i - 1;
                }
                    //right
                else if (left < right && right > down && right != down && right != 0) {
                    maxScore = maxScore + myArry[k][i];
                    cout << "Right \n";
                    myArry[k][i] = 0;
                    i = i + 1;
                } else {
                    maxScore = maxScore + myArry[k][i];
                    myArry[k][i] = 0;
                    cout << "Down \n";
                    k = k + 1;
                }
            }
        }
    }

    cout << maxScore;
    return 0;
}