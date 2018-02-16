#include <iostream>


void solve(int numOfTestCases){
    for(int i = 0; i < numOfTestCases; i++) {
        int num;
        std::cin >> num;

        int numCatch = 0;
        unsigned int result;

        if (4294967289 % (num - 2) == 0) {
            result = (4294967289 / (num - 2));
        } else {
            result = (4294967289 / (num - 3));
            numCatch = 1;
        }

        for (int i = 0; i < num - 3; i++) {
            std::cout << result << " ";
        }

        if (numCatch == result) {
            std::cout << result << " ";
        } else { std::cout << (4294967289 - (result * (num - 3))) << " "; }

        std::cout << 2 << " " << 1 << std::endl;

    }
}

int main() {
    int numOfTestCases;
    std::cin >> numOfTestCases;
    solve(numOfTestCases);

    return 0;
}