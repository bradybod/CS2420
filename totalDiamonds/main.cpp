#include <iostream>
using namespace std;

int main() {
    int numTestCases = 0, num = 0, count = 0, total = 0;
    cin >> numTestCases;
    while (count < numTestCases) {
        cin >> num;
        int counter = 2;
        for(int i = 1; i <= num; i++){
            total+=(counter * i);
    //        cout << counter << " X " << i << " = " << counter*i << endl;
            counter++;
        }
        for(int i = num-1; i > 0; i--){
   //         cout << counter << " X " << i << " = " << counter*i << endl;
            total += (counter * i);
            counter++;
        }
        string tmp = total;
        cout << total << endl;
        total = 0;
        counter = 2;
        count++;
    }
    return 0;
}