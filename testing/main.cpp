#include "iostream";
#include <vector>;
using namespace std;




int main(){
    int testCases = 0;
    cin >> testCases;

    for(int i = 0; i < testCases; i++){
        bool trueOrFalse = true;
        int rank = 0;
        int high = 0;
        int low = 0;
        int numOfPeople;
        int current;
        int next;

        cin >> numOfPeople >> rank;
        for (int j = 0; j < numOfPeople; j++){
            cin >> current;
            if(low == 0 && current < rank){
                low = current;
            }else if(high == 0 && current > rank){
                high = current;
            }else if(current < rank && current > low){
                low = current;
            }else if(current > rank && current < high){
                high = current;
            }else if(current == rank){
            }else{trueOrFalse = false;}
        }
        if(trueOrFalse){printf("YES\n");}
        else{printf("NO\n");}
    }

}

