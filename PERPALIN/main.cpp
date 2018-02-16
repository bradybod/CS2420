#include <iostream>
using namespace std;


int main(){
    int testCases = 0;
    int p = 0;
    int n = 0;
    string string1 = "";

    cin >> testCases;

    for(int x = 0; x < testCases; x++){
        string1.empty();
        cin >> n >> p;
        if(n <= 2 || p <= 2){
            printf("impossible\n");
        } else {
            int num;
            string myTempString = "";
            string output = "";

            myTempString.resize(p);

            for(int y = 0; y < p; y++) {
                if (y == 0 || y == p - 1) {
                    myTempString[y] = 'a';
                } else {
                    myTempString[y] = 'b';
                }
            }

            if(n % p){
                printf("impossible\n");
            }

            num = (n / p);

            while(num--){
                output = output + myTempString;
            }
            printf("%s\n", output.c_str());
        }
    }
}