#include<iostream>
using namespace std;

int main(){
    string input;
    bool LastLetterSetA = false;
    bool LastLetterSetB = false;
    int countOfA=0;
    int countOfB=0;
    int i=0;
    int length;
    int temp=0;
    int TestCases;
    int position;
    char letter;

    cin >> TestCases;

    for(int j = 0; j < TestCases; j++){
        i = 0;
        temp=0;
        countOfA=0;
        countOfB=0;

        cin >> input;
        length = input.length();

        while(input[i] == '.'){
            i++;
        }

        letter = input[i];
        position = i;

        for(i = position; i < length; i++){
            if(input[i] == letter){
                if(letter =='A'){
                    countOfA = (countOfA + 1) + temp;
                    temp=0;
                } else {
                    countOfB = (countOfB + 1) + temp;
                    temp=0;
                }
            } else if (input[i] != '.' && input[i] != letter){
                temp=0;
                letter = input[i];
                if(letter == 'A'){
                    countOfA = countOfA + 1;
                }
                else {countOfB = countOfB + 1; }
            } else { temp++; }

        }


        cout << countOfA << " " << countOfB << endl;
    }
    return 0;
}