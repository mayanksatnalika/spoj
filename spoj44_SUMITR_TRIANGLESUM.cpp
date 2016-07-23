#include<iostream>
using namespace std;
typedef long long int lint;
lint a[105][105];lint ans[105][105];
lint maxm(lint a,lint b)
{  if(a>b)return(a);else   return(b);}

lint finds(lint a[][105],lint n)
{   ans[0][0]=a[0][0];  for(lint i=1;i<n;i++)
    {  for(lint j=0;j<=i;j++){     if(j==0)   ans[i][j]=ans[i-1][j]+a[i][j];  else if(j==i)ans[i][j]=a[i][j]+ans[i-1][j-1]; else   ans[i][j]=a[i][j]+maxm(ans[i-1][j],ans[i-1][j-1]);
        }} lint maxi=0;
    for(lint i=0;i<n;i++)
    { if(ans[n-1][i]>maxi) maxi=ans[n-1][i];}return(maxi);}

int main()
{ lint tc,c=0,n;cin>>tc;
while(c<tc)
 {cin>>n;
 for(lint i=0;i<n;i++)
    for(lint j=0;j<=i;j++)
    cin>>a[i][j];
 cout<<finds(a,n)<<endl;
    c++;}
    return(0);
    }
