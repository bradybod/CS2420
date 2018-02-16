#include <iostream>
#include <vector>
#include <string>
#include <sstream>


int main() {
    std::vector<int> letters;
    letters.push_back('A');
    letters.push_back('B');
    letters.push_back('C');
    letters.push_back('D');
    letters.push_back('E');
    letters.push_back('F');
    letters.push_back('G');
    letters.push_back('H');
    letters.push_back('I');
    letters.push_back('J');
    letters.push_back('K');
    letters.push_back('L');
    letters.push_back('M');
    letters.push_back('N');
    letters.push_back('O');
    letters.push_back('P');
    letters.push_back('Q');
    letters.push_back('R');
    letters.push_back('S');
    letters.push_back('T');
    letters.push_back('U');
    letters.push_back('V');
    letters.push_back('W');
    letters.push_back('X');
    letters.push_back('Y');
    letters.push_back('Z');

                        int A = 'A';
                        int B = 'B';
                        int C = 'C';
                        int D = 'D';
                        int E = 'E';
                        int F = 'F';
                        int G = 'G';
                        int H = 'H';
                        int I = 'I';
                        int J = 'J';
                        int K = 'K';
                        int L = 'L';
                        int M = 'M';
                        int N = 'N';
                        int O = 'O';
                        int P = 'P';
                        int Q = 'Q';
                        int R = 'R';
                        int S = 'S';
                        int T = 'T';
                        int U = 'U';
                        int V = 'V';
                        int W = 'W';
                        int X = 'X';
                        int Y = 'Y';
                        int Z = 'Z';


    std::string mystring;
    std::cin >> mystring;
    std::stringstream iss( mystring );
    int number2;
    std::vector<int> vctor2;
    while ( iss >> number2 )
        vctor2.push_back( number2 );

    for (int j = 0; j < vctor2.size(); j++) {
        for (int i = 0; i < vctor2.size(); i++) {
            std::string rslt1 = std::to_string(vctor2[j]);
            std::string rslt2 = std::to_string(vctor2[i]);
            std::string valueint = rslt1 + rslt2;
            int value = atoi(valueint.c_str());

            if (i != j) {
                switch (value) {
                    case 65 :
                        printf("A");
                        break;
                    case 66 :
                        printf("B");
                        break;
                    case 67 :
                        printf("C");
                        break;
                    case 68 :
                        printf("D");
                        break;
                    case 69 :
                        printf("E");
                        break;
                    case 70 :
                        printf("F");
                        break;
                    case 71 :
                        printf("G");
                        break;
                    case 72 :
                        printf("H");
                        break;
                    case 73 :
                        printf("I");
                        break;
                    case 74 :
                        printf("J");
                        break;
                    case 75 :
                        printf("K");
                        break;
                    case 76 :
                        printf("L");
                        break;
                    case 77 :
                        printf("M");
                        break;
                    case 78 :
                        printf("N");
                        break;
                    case 79 :
                        printf("O");
                        break;
                    case 80 :
                        printf("P");
                        break;
                    case 81 :
                        printf("Q");
                        break;
                    case 82 :
                        printf("R");
                        break;
                    case 83 :
                        printf("S");
                        break;
                    case 84 :
                        printf("T");
                        break;
                    case 85 :
                        printf("U");
                        break;
                    case 86 :
                        printf("V");
                        break;
                    case 87 :
                        printf("W");
                        break;
                    case 88 :
                        printf("X");
                        break;
                    case 89 :
                        printf("Y");
                        break;
                    case 90 :
                        printf("Z");
                        break;


                }
            }
        }
    }


//    int aa = 0;
//    std::cin >> aa;
//    for (int ab = 0; ab < aa; ab++){
//        int ac = 0;
//        std::cin >> ac;
//    }

    return 0;
}