#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	lint tc,c=0,n,ans[1500];
	cin>>tc;
	while(c<tc)
    {
        cin>>n;
        ans[c]=192+(n-1)*250;
        c++;
    }
    for(int i=0;i<tc;i++)
        cout<<ans[i]<<endl;
	return(0);
}
