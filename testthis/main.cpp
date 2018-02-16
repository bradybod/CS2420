#include<iostream>
#include<stdio.h>
using namespace std;

int arr[100001];

long long rec(int i,int j)
{
    if(i==j && arr[i] ==1)
    {
        return 0;
    }
    if(gcd(i,j)!=1){
        return 1+
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    long long ans = rec(i,j);
    cout<<ans;

}