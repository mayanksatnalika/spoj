#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int n;
lint a[100000];
lint ans[100000];
lint max(lint a,lint b)
{
    if(a>b)
        return(a);
    return(b);
}
int cal(lint k)
{
    for(lint k=1;k<n;k++)
    {
        ans[k]=max(ans[k-1],ans[k-2]+a[k]);
    }
}
int main()
{
	//your code here
	lint tc,c=0;
	//int a[50];
	cin>>tc;
	c=0;
	while(c<tc)
    {
        cin>>n;
        for(lint i=0;i<n;i++)
            ans[i]=0;
        for(lint i=0;i<n;i++)
            cin>>a[i];
        ans[0]=a[0];

        cal(0);
        cout<<"Case "<<c+1<<": "<<ans[n-1]<<endl;
        c++;
    }
	return(0);
}
