#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
    lint n,c=0,ans[100000]={0};
	cin>>n;
    while(n!=0)
    {

        for(lint i=n;i>=1;i--)
                ans[c]=ans[c]+i*i;
        cin>>n;

        c++;
    }
    for(lint i=0;i<c;i++)
            cout<<ans[i]<<endl;
	return(0);
}
