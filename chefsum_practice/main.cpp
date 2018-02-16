#include <iostream>
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int e = 0;
    int d = 0;

    std::cin >> a;
    for (int x = 0; x < a; x++) {
        std::cin >> b;
        for(int y = 0; y < b; y++){
            std::cin >> c;
            if (c < e || y == 0){
                e = c;
                d = y +1;

            }
        }
        printf("%u\n", d);

    }
}

