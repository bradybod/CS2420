#include <iostream>
#include <ctime> //time
#include <cstdlib> //rand/srand

using namespace std;

void print(int aa[], int n){
    for(int i = 0; i < n; i++){
        cout << " " <<aa[n];

    }
    cout << endl;
}

int merge(int aa[], int bb[], int l, int p, int r){
    int i =l, j =p, k =l;
    while ( i < p && j < r){
        if(aa[i] <= aa[j]){
            bb[k++] = aa[i++];
        }
        else bb[k++] = aa[j++];
    }
    while (i < p){
        if(aa[i] <= aa[j]) {
            bb[k++] = aa[i++];
        }
    }
    while (j < r){
        bb[k++] = aa[j++];
    }

}

 void merge_sort(int aa[], int bb[], int l, int r){
    //[l = left,r = right]
    if (r - l == 1){
        return;
    }
    //p = partition
    int p = (l + r)/2;
    merge_sort(aa, bb, l, p);
    merge_sort(aa, bb,p, r);
    merge(aa, bb, l, p, r);
    for (int i = l; i < r; i++) {
        aa[i] = bb[i];
    }

}

void scramble(int aa[], int n){
    for (int j = n -1; j > 0; j --){
        int i = rand() & (j +1);
        int tmp = aa[i];
        aa [i] = aa[j];
        aa[j = tmp];
    }
}

int partition(int aa[], int l, int r){
    int a = aa[l + rand() % (r - l +1)];
    while (1) {
        while (l <= r && aa[l] < a) {
            l++;
        }
        while (l <= r && aa[r] > a) {
            r--;
        }
        if(l >= r){
            return r;
        }
        int tmp =aa[l];
        aa[l] = aa[r];
        aa[r] = tmp;
        l++;
        r--;
    }
}

void quick_sort(int aa[], int l, int r){ //[l, r]
    if(l >= r){
        return;
    }
    int p = partition(aa, l, r);
    quick_sort(aa, l, p);
    quick_sort(aa, p+1, r);

}

int main() {
    const int n = 10;
    int *aa = new int[n];
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        aa[i] = rand() % (n * 2);
    }

    print(aa, n);
    int *bb = new int[n];
    merge_sort(aa, bb, 0, n);
   // print(aa, n);
    scramble(aa, n);
    quick_sort(aa,0, n -1);
   // print(aa, n);
    delete[] aa;
    return 0;


}