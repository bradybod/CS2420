#include <iostream>

int main() {
    int x = 0;
    int nums[1000000];

    for(int p = 0; p < 1000000; p++){
        nums[p] = p + 1;
    }



    std::cin >> x;


    for (int i = 0; i < x; i++){
        int y = 0;
        std:: cin >> y;
        printf("2 1 ");
        for (int z = 2 ; z < y; z++) {
            printf("%u ", nums[z]);
        }


        printf("\n");
    }
    return 0;
}