#include <iostream>
using namespace std;

int main() {
    int num = 0;
    long long int tmp = 0;
    cin >> num;
    for(int i = 0; i < num; i++){
        for(int x = 0 ; x < num; x++){
            if(i == x){tmp += 1;
            }else {
                tmp += i + x;
            }
        }
    }
    cout << tmp;

    return 0;
}