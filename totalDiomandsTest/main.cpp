#include <iostream>
#include <cmath>

using namespace std;

int main() {
     long long int numTestCases = 0, num = 0, count = 0, total = 0;
    cin >> numTestCases;
    long long int arry[1000000] = {0};
    while (count < numTestCases) {
        cin >> num;
        if(arry[num] != 0){
            cout << arry[num] << endl;
        }else {
            long long int tmp = num * num;
            long long int total = pow(num,3) + pow(num,2);
            cout << total << endl;
            arry[num] = total;
        }
        count++;
    }
    return 0;
}