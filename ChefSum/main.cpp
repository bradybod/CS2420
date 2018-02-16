#include <iostream>
#include <vector>

void compute(int x, int nums[]){
    int tmp[x];
    int tmpnum2 = 0;
//    for(int j = 0; j < x; j++){
//        tmpnum2 = nums[j]+tmpnum2;
//    }
    for(int i = 0; i < x; i++){
        int tmpnum = 0;
        tmpnum = nums[i]+tmpnum2;
        tmp[i]= tmpnum;
    }

    int little = tmp[0];
    int position = 1;
    for(int k = 0; k < x; k++){
        if(tmp[k] < little){
            little = tmp[k];
            position = k + 1;
        }
    }
    printf("%u\n", position);

}

int main() {
    int a = 0, b = 0, c = 0;

    std::cin >> a;

    for(int i = 0; i < a; i++){
        std::cin >> b;
        int nums[b];
        int bb = 0;
        for( int j = 0; j < b; j++){
            std::cin >> c;
            bb = c + bb;
            nums[i] = bb;

        }
        compute(b ,nums);
    }
    return 0;
}