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
    lint n=5,st[100005],p[100005],a=0;

    while(n)
    {
        cin>>n;
        a=0;
        if(n)
        {
            for(lint i=0;i<n;i++)
                cin>>st[i];
            for(lint i=0;i<n;i++)
                cin>>p[i];
            sort(st,st+n);
            sort(p,p+n);
            for(lint i=0;i<n;i++)
                a=a+(st[i]*p[n-1-i]);
            cout<<a<<endl;

        }
    }
	//your code here
	return(0);
}
