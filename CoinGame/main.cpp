#include <iostream>
using namespace std;

int main() {
   int ng = 0;
   cin >> ng;

   for(int l = 0; l < ng; l++) {
       int count = 0;
       int numbersInGame;
       cin >> numbersInGame;

       for (int i = 0; i < numbersInGame; i++) {
           int nums = 0;
           cin >> nums;
           while (nums % 2 == 0) {
               nums = nums / 2;
               ++count;
           }
       }

       if (count % 2 == 0) {
           cout << "Alan" << endl;
       } else { cout << "Charlie" << endl; }

   }


}