#include<bits/stdc++.h>
using namespace std;
int n,m,x;
vector<int>v;
int ara[35];

void recur(int sum,int i,int flag)
{

    int tot = 1;
    for(int j=1;j<=m;j++)
    {
        tot = tot*i;
    }
    if(sum==n&&flag==1){
        x++;
      // printf("one %d %d %d\n",sum,i,flag);
        return;
    }
    if(sum>n||i>sqrt(n))
    {
     //   printf("return  %d %d %d\n",sum,i,flag);
        return;
    }

  //  printf("sum = %d i = %d flag = %d\n",sum,i,flag);

    recur(sum+tot,++i,1);

    recur(sum,i,0);

    return;
}

int main()
{
    int i;

    while(scanf("%d %d",&n,&m)==2)
    {

        for(i=1;i<=33;i++)
        {
            ara[i] = i;
        }
        x = 0;
        recur(0,0,1);
        printf("%d\n",x/2);
    }








return 0;
}
