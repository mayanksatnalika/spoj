#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int c=0;
int t[102][502];
int n=0;
int val[110]={0};
int wt[110]={0};
int maxwt=0;
int max(int a,int b)
{
    if(a>b)
        return(a);
    else
        return(b);
}
int fun(int k,int l)
{


    for(int k=1;k<n;k++)
    {
        for(int l=1;l<=maxwt;l++)
        {

             if(l<wt[k])
                {
                    t[k][l]=t[k-1][l];
                   }
            else
            {
                t[k][l]=max(val[k]+t[k-1][l-wt[k]],t[k-1][l]);
            }
        }
    }

    int pri=0;
    for(int i=0;i<=maxwt;i++)
        {if(t[n-1][i]==t[n-1][maxwt])
            {cout<<i<<" ";break;}}

}


int main()
{
    cin>>maxwt>>n;
    while(maxwt!=0 && n!=0)
    {
        for(int i=0;i<n;i++)
            cin>>wt[i]>>val[i];
        for(int k=0;k<n;k++)
    {
        t[k][0]=0;
    }
    for(int l=1;l<=maxwt;l++)
    {
        if(l<wt[0])
            t[0][l]=0;
        else
            t[0][l]=val[0];
    }
        fun(0,0);
        cout<<t[n-1][maxwt]<<endl;
        cin>>maxwt>>n;
    }

	return(0);
}
