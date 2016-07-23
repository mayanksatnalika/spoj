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
	//your code here
	lint n,tc,c=0,ans=0;
	cin>>tc;
	while(c<tc)
    {
        cin>>n;
       if(n%2==1)
        ans=n/2;
       else if((n+2)%4==0)
            ans=n/2-2;
       else
        ans=n/2-1;

        cout<<ans<<endl;
        c++;
    }
	return(0);
}
