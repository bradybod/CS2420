#include <iostream>

int calculate(int sizeOfMultiSet, int maxNumber){
    long long nums[2000000];
    long long hash[1000000];
    long long results[2000000] ={0};
    int result;
    if(results[maxNumber] != 0){
        std::cout << results[maxNumber] << std::endl;
    }else {
        for (int i = 0; i <= sizeOfMultiSet + maxNumber; i++) {
            hash[i] = 0;
        }

        for (int i = 1; i <= sizeOfMultiSet; i++) {
            std::cin >> nums[i];
            hash[nums[i]]++;
        }

        int i = 0, cnt = 1;

        while (cnt <= maxNumber) {
            if (hash[i] == 0) {
                hash[i]++;
                cnt++;
            }
            i = i + 1;
        }
        i = 0;

        while (i <= sizeOfMultiSet + maxNumber + 1) {
            if (hash[i] == 0) {
                result = i;
                break;
            }
            i = i + 1;
        }
        results[sizeOfMultiSet] == result;
        std::cout << result << std::endl;
    }
}


int main()
{
    long long sizeOfMultiSet,maxNumber;



    int testCases = 0;
    std::cin >> testCases;

    for (int j = 0; j < testCases; j++){
        std::cin >> sizeOfMultiSet;
        std::cin >> maxNumber;
        calculate(sizeOfMultiSet, maxNumber);
    }
    return 0;
}