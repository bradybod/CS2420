#include <iostream>

int main() {
    long long arry[1000001];
    long long answers[1000001] = {0};
    for(int i = 0; i < 1000001; i++){
        if(i == 0){
            arry[i] = 1;
        }else {
            long long int tmp = (3 * (arry[i - 1]) + 1)%1000000007;
            tmp %= 1000000007;
            arry[i] = tmp;
        }
    }


    long int numTests = 0;
    std::cin >> numTests;
    for(int i = 0; i < numTests; i++){

        long int tmp = 0;
        std::cin >> tmp;
        if(answers[tmp] == 0) {
            long long int result = 0;
            result = (arry[tmp] + arry[tmp - 1])%1000000007;
            result %= 1000000007;
            std:: cout << result << std::endl;
            answers[tmp] = result;
        }else{std:: cout << answers[tmp] << std::endl;}
    }
    return 0;
}