#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
lint k,l,m,a[85],ans[1000010]={0};
lint iswin(lint n)
{

    for(lint i=0;i<=n;i++)
    {
        ans[i]=0;
        if(i>=1 && ans[i-1]==0)
            {
                ans[i]=1;}
        if(i>=k && ans[i-k]==0)
            { //cout<<"made i to 1 i= "<<i<<endl;
            ans[i]=1;}
        if(i>=l && ans[i-l]==0)
        { //cout<<"made i to 1 i= "<<i<<endl;
          ans[i]=1;}
        }
   //cout<<ans[n];
    return(ans[n]);
}
int main()
{
	cin>>k>>l>>m;
	for(lint i=0;i<m;i++)
            cin>>a[i];
    for(lint i=0;i<m;i++)
    {

        if(iswin(a[i]))
            cout<<"A";
        else
            cout<<"B";
    }
	return(0);
}
