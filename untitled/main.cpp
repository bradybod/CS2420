#include <iostream>
#include <vector>
using namespace std;

vector <int> calculate(vector <int> num, int index){
   vector <int> s;
    for(int i = 0; i < index; i++) {
       int rtrn;
       int o = 0;
       while (o < i){
           rtrn = num[o] + rtrn;
           o++;
       }
       o = i+1;
       while(o < index +1){
           rtrn = num[o]+o;
           o++;
       }
       s[i]=rtrn;
   }
    return s;
}

int main() {
    // your code goes here
    int a, b, c, count;
    vector <int> totals;
    std::cin >> a;
    while (count != a){
    scanf("%u", b);
        for(int index = 0; index < b; index++){
            std::cin >> c;
            vector <int> num;
            num.push_back(c);
            totals = calculate(num, b);
        }
        int z = totals[0];
        int zz;
        for(int j = 0; j < b; j++){
            if(totals[j] < z){
                z = totals[j];
                zz = j;
            }
        }
        std::cout << zz << std::endl;
    }
    return 0;
}