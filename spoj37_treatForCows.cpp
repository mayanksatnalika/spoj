#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int n;
int val[2005];
int cac[2005][2005];

int max(int a,int b)
{
    if(a>b)
        return (a);
    return(b);
}
int pro(int b,int e)
{
     if(b>e)
        return(0);

    if(cac[b][e]!=-1)
        return(cac[b][e]);
    else
    {
        int  yr=n-e+b;
        cac[b][e]=max(pro(b+1,e)+val[b]*yr,pro(b,e-1)+val[e]*yr);
        return (cac[b][e]);
    }
}
int main()
{
    cin>>n;
for(int i=0;i<n;i++)
    for(int  j=0;j<n;j++)
        cac[i][j]=-1;
for(int i=0;i<n;i++)
        cin>>val[i];
    cout<<pro(0,n-1);
    cout<<cac[0][n-1];
    return(0);
}
