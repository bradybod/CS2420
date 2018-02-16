#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 && j == 0){
                a[i][j]=m;
            }else if(i == j){
                a[i][j] = a[i-1][j-1]+k;
            }else if(i>j){
                a[i][j] = a[i-1][j]-1;
            }else if(i<j){
                a[i][j] = a[i][j-1]-1;
            }

        }

    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}