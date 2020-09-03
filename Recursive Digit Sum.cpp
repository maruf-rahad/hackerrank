#include<bits/stdc++.h>
using namespace std;
#define ll long long
 ll n,m,flag;

 void superDigit(ll a)
 {


     ll sum = 0,b;
         if(a<10)
     {
         printf("%lld\n",a);
         return;
     }
     while(a!=0)
     {
            b = a%10;
            sum+=b;
            a = a/10;
     }
     superDigit(sum);

 }
int main()
{
    string s;

    while(cin>>s>>m)
    {
        int l = s.size();
        n = 0;
        for(int i=0;i<l;i++)
        {
            n+=s[i]-'0';
        }
        flag = 0;
        superDigit(n*m);


    }











    return 0;
}
