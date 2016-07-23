#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
lint maxwt;
lint cne;
lint wt[505];
lint val[505];
lint cac[505][10005];
lint wu[505][10005];
lint min(lint a,lint b,lint k,lint l)
{
   if(a>b)
    {
        wu[k][l]=(maxwt/wt[k])*wt[k];
        return (b);
    }
    return(a);
}
lint cal(lint k,lint l)
{
    //cout<<"in";

    for(int k=1;k<cne;k++)
    {
        for(lint l=1;l<=maxwt;l++)
        {
        wu[k][l]=wu[k-1][l];
        lint  n=maxwt/wt[k];
        if(l<wt[k])
        {
            cac[k][l]=cac[k-1][l];
        }
        else
        {
        cac[k][l]=min(cac[k-1][l],n*val[k]+cac[k-1][l-n*wt[k]],k,l);
        }
    }
}
}
int main()
{
int tc;
cin>>tc;
int c=0;
while(c<tc)
{
    int w2,w1;
    for(int i=0;i<505;i++)
        for(int  j=0;j<10005;j++)
            cac[i][j]=-1;
    cin>>w1>>w2;
    maxwt=w2-w1;
    cin>>cne;
    for(int i=0;i<cne;i++)
        cin>>val[i]>>wt[i];
   for(int i=0;i<cne;i++)
   {cac[i][0]=0;
    wu[i][0]=0;
   }
     for(lint i=1;i<=maxwt;i++)
    {
        if(i<wt[0])
        {
            wu[0][i]=0;
            cac[0][i]=0;
        }
        else
        {
            lint n=i/wt[0];
            wu[0][i]=n*wt[0];
            cac[0][i]=n*val[0];
        }
    }
    cal(0,0);
for(int i=0;i<cne;i++)
{
    for(int j=0;j<=maxwt;j++)
        cout<<cac[i][j]<<" ";
    cout<<endl;
}
    if(wu[cne-1][maxwt]==maxwt)
        cout<<"The minimum amount of money in the piggy-bank is "<<cac[cne-1][maxwt]<<"."<<endl;
    else
        cout<<"This is impossible."<<endl;
    c++;
}
return(0);
}
