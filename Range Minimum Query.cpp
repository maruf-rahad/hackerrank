#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ara[100010];
int tree[400010];

void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = ara[b];
        return ;
    }
    int mid = (b+e)/2;
    int left = node*2;
    int right = node*2+1;

    build(left,b,mid);
    build(right,mid+1,e);
    tree[node] = min(tree[right],tree[left]);
}

int query(int node,int b,int e,int i,int j)
{
    if(b>j||e<i)return 99999999;
    if(b>=i&&e<=j)
    {
        return tree[node];
    }
    int mid = (b+e)/2;
    int left = node*2;
    int right = node*2+1;
    int r1 = query(left,b,mid,i,j);
    int r2 =  query(right,mid+1,e,i,j);

    return min(r1,r2);

}

int main()
{
    int t,n,m,a,b,i,j,x,y,flag,mx,mn,sum;
    string s,s2;
    char str;

    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        build(1,1,n);
        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a,&b);
            x = query(1,1,n,a+1,b+1);
            printf("%d\n",x);
        }
    }












return 0;
}
