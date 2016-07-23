#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int max(int a,int b)
{
    if(a>b)
        return(a);
    return(b);
}
int cac[1000][1000];
int a[1000];
int sol(int b, int e)
{
    if(b>e)
        return(0);
    if(cac[b][e]!=-1)
        return(cac[b][e]);
    cac[b][e]=max(sol(b+1,e)+a[b],sol(b,e-1)+a[e]);
        return (cac[b][e]);

}
int main()
{
	//your code here
	for(int i=0;i<1000;i++)
    {
        for(int j=0;j<1000;j++)
            cac[i][j]=-1;
    }
	int n,s=0,an;
	cin>>n;
	while(n!=0)
    {
        s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        an=sol(0,n-1);
        cout<<an<<endl;
        cin>>n;
    }
	return(0);
}
