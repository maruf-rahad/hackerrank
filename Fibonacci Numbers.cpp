#include<bits/stdc++.h>
using namespace std;
int ara[50];

long long fibo(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(ara[n]!=0)return ara[n];


    ara[n]  = fibo(n-1)+fibo(n-2);
    return ara[n];


}


int main()
{
    long long a,b,i,j,n;

    scanf("%d",&n);

         printf("%lld\n",fibo(n));
















    return 0;


}
