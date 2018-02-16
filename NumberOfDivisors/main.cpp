#include <iostream>
#include <math.h>
using namespace std;

//void SieveOfEratosthenes(int n)
//{
//    // Create a boolean array "prime[0..n]" and initialize
//    // all entries it as true. A value in prime[i] will
//    // finally be false if i is Not a prime, else true.
//    long long* primeNums = new long long [n+1]();
//    memset(primeNums, true, sizeof(primeNums));
//
//    for (int p=2; p*p<=n; p++)
//    {
//        // If prime[p] is not changed, then it is a prime
//        if (primeNums[p] == 0) {
//            // Update all multiples of p
//            for (int i=p*2; i<=n; i += p)
//                primeNums[i] = i;
//        }
//
//    }
//
//    // Print all prime numbers
//    for (int p=1; p<=n; p++)
//        if(primeNums[p] == 0){
//            printf("%u\n", p);
//        }
//}

int main(){
    int n = 10000001;
    long long* primeNums = new long long [10000001]();
    long long* numCount = new long long [10000001]();

    //long long* calculated = new long long [10000001]();


    for (int p=2; p*p<=n; p++) {

        // If prime[p] is not changed, then it is a prime
        if (primeNums[p] == 0) {
            // Update all multiples of p
            for (int i = p * 2; i <= n; i += p) {
                primeNums[i] = i;
            }
        }
    }
    long long count = 0;
    for(int p = 2; p < 10000001; p++){
        if(primeNums[p] == 0){
            numCount[count] = p;
            count +=1;
        }
    }


    int number = 0;
    cin >> number;
    long long* usrinput = new long long [number+1]();

    for(int i = 0; i < number; i++){
        int input = 0;
        cin >> input;
        usrinput[i] = input;
    }
    long long total = 0;
    for(int j = 0; j < number; j++){
        if(total!=0){
          //  cout << numCount[j] << endl;
            total = total * numCount[j]^usrinput[j];
            cout << usrinput[j] << " " <<numCount[j] << " " <<total << endl;
        }
        else{total = numCount[j]^usrinput[j];
            cout << usrinput[j] << " " <<numCount[j] << " " <<total << endl;
        }
    }
    cout << total << endl;

return 0;
}
