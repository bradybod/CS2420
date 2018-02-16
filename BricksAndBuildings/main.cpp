#include <iostream>
using namespace std;


int main() {

    int numOfBuildings = 0;
    scanf("%u", &numOfBuildings);


    int* queries = new int[1000000]();
    int* building = new int[1000000]();
    for (int i = 0; i < numOfBuildings; i++){
        int tmp;
        scanf("%u", &tmp);
        if(building[tmp]!=0){
            building[tmp]+=1;
        }else{ building[tmp] = 1;}

    }

    int numOfQueries = 0;
    scanf("%u", &numOfQueries);
    for (int j = 0; j < numOfQueries; j++){
        int count = 0;
        int query = 0;
        scanf("%u", &query);
        if(queries[query] == 0) {
            int tmp2 = query;
            while(tmp2 <= 1000000){
                if(building[tmp2]!=0){
                    count+= building[tmp2];
                }
                tmp2 += query;
            }
            printf("%u\n", count);
            queries[query] = count;
        } else{printf("%u\n", queries[query]);}
    }

    return 0;
}
