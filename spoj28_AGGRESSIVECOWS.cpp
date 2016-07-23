#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
lint a[100000],n,c;
int f(lint x)
{
    lint curr=a[0];
    lint cp=1;
    for(lint i=1;i<n;i++)
    {
        if(a[i]-curr>=x)
       {
            cp++;
            if(cp==c)
                return(1);
            curr=a[i];
        }
    }
    return(0);
}
int main()
{
	//your code here
	lint i,tc,cas=0,ans[100000];
	cin>>tc;
	while(cas<tc)
    {

        cin>>n>>c;
        for(i=0;i<n;i++)
              cin>>a[i];
        sort(a,a+n);
        lint l=0,h=a[n-1]-a[0];
       // cout<<"h is "<<h<<endl;
        while(l+1<h)
        {
            lint x=(l+h)/2;
            /*cout<<"l is "<<l<<endl;
            cout<<"h is "<<h<<endl;

            cout<<"x is "<<x<<endl;
            cout<<"(f(x) is ) "<<f(x)<<endl;*/
            if(f(x)==1)
                l=x;
            else
                h=x;
                /*cout<<"new l becomes "<<l<<endl;
                cout<<"new h becomes "<<h<<endl;*/

        }
        ans[cas]=l;

        cas++;

    }
    for(i=0;i<tc;i++)
        cout<<ans[i]<<endl;
	return(0);
}
