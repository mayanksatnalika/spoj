#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
    lint n,tc,c=0,ans[25000]={0},res;
    cin>>tc;
    while(c<tc)
    {
        cin>>n;
        res=n;
        for(lint i=2;i*i<=n;i++)
        {
            if(n%i==0)
                res=res-res/i;
            while(n%i==0)
                n=n/i;
        }
        if(n>1)
            res=res-res/n;
    ans[c]=res;
    c++;
    }
    for(lint i=0;i<tc;i++)
        cout<<ans[i]<<endl;
	//your code here
	return(0);
}
