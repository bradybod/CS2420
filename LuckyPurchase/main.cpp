//#include <bits/stdc++.h>

#include <iostream>
#include <vector>

using namespace std;

struct Sale{
    string name;
    int value;
    bool operator < (const Sale& rhs) const {
        return value < rhs.value;
    }
};

bool parseValue(int value){
    string tmp = to_string(value);
    int seven = 0;
    int four = 0;
    for(int i = 0; i < tmp.size(); i++){
        char num = tmp[i];
        if(num == '7'){
            seven++;
        }else if(num == '4'){
            four++;
        }else{return false;}
    }
    return seven == four;
}

int main() {
    int n;
    vector<Sale> myVector;
    string lowestName;
    cin >> n;
    for (int a0 = 0; a0 < n; a0++) {
        string name;
        int value;
        cin >> name >> value;
        Sale sale;
        sale.name = name;
        sale.value = value;
        myVector.push_back(sale);

    }
    sort(myVector.begin(), myVector.end());
    if (myVector.size() != 0) {
        for (int i = 0; i < myVector.size(); i++) {
            if (parseValue(myVector[i].value)) {
                cout << myVector[i].name << endl;
                break;
            }else if((i+1) == myVector.size()){cout << "-1\n";}
        }
    } else { cout << "-1\n"; }


    return 0;
}
