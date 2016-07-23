#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
    lint tc,c=0,n=5,s=0,no=0,ans[100000];
    cin>>tc;
    while(c<tc)
    {
        s=0;
        n=5;
        cin>>no;
        while(no/n>0)
        {
            s=s+no/n;
            n=n*5;
        }
        ans[c]=s;
        c++;
    }
    for(lint i=0;i<tc;i++)
            cout<<ans[i]<<endl;
	//your code here
	return(0);
}
