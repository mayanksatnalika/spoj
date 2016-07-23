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
	lint ans=0,c =0 ,tc,n,a[10005] ;
	cin>>tc;
	while(c < tc)
    {
        cin>>n;
        ans=0;
        for(lint i=0;i<n;i++)
            cin>>a[i];

        for(lint i=0;i<n-1;i++)
                ans= ans+ ((i+1)*(n-i-1))*(a[i+1]-a[i]);

            cout<<ans<<endl;
        c++;
    }
	return(0);
}
