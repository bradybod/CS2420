#include <iostream>
using namespace std;

int main() {
        int scoreA = 0, scoreB = 0;
        string string1, fiveA, fiveB;
        while (cin >> string1) {
            for (int i = 0; i < 20; i++) {
                if (i % 2 == 0) {
                    fiveA += string1[i];

                } else {
                    fiveB += string1[i];

                }
            }
            for (int i = 0; i < 10; i++) {
                if (i < 5) {
                    if (fiveA[i] == '1') {
                        scoreA++;
                    }
                    if (fiveB[i] == '1') {
                        scoreB++;
                    }
                    if (scoreA > scoreB) {
                        if (scoreA - scoreB > 5 - i) {
                            cout << "TEAM-A " << i * 2 << endl;
                            break;
                        }
                    } else if (scoreB > scoreA) {
                        if (scoreB - scoreA > 5 - i) {
                            cout << "TEAM-B " << i * 2 + 1 << endl;
                            break;
                        }
                    }
                } else {


                    if (fiveA[i] == '1' && fiveB[i] == '0') {
                        cout << "TEAM-A " << i * 2 + 2 << endl;
                        break;
                    } else if (fiveA[i] == '0' && fiveB[i] == '1') {
                        cout << "TEAM-B " << i * 2 + 2 << endl;
                        break;
                    } else if (fiveA[i] == fiveB[i] && i < 9) {
                    } else if (i == 9) {
                        cout << "TIE" << endl;
                        break;
                    }
                }

            }
            string1 = "";
            fiveA = "";
            fiveB = "";
        }
    return 0;
}