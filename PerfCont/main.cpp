#include <iostream>

int main() {
   int numTestCases = 0;
   scanf("%u", &numTestCases);
    for(int i = 0; i < numTestCases; i++){
        int numQuestions = 0;
        int numParticipants = 0;

        std::cin >>numQuestions;
        std::cin >>numParticipants;

        int tenPercent = numParticipants/10;
        int fiftyPercent = numParticipants/2;


        int arry[numQuestions];
        int hard = 0;
        int easy = 0;
        for(int j = 0; j < numQuestions; j++){
            std::cin >>arry[j];
            if (arry[j] >= fiftyPercent){
                easy +=1;
            }
            if(arry[j] <= tenPercent){
                hard +=1;
            }

//
        }
        if(hard == 2 && easy == 1){
                printf("yes\n");
            }else{printf("no\n");}

    }
}