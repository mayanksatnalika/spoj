#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
lint gcd(int a,int b)
{
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    if (b==0)
        return a;
    else
    {
       cout<<"modu is "<<a%b<<endl<<endln;
         gcd(b,a%b);
    }

}
int main()
{
    lint tc,c=0,a,b,g,ansx[10000],ansy[10000];
	cin>>tc;
	while(c<tc)
    {
        cin>>a>>b;

            g=gcd(a,b);
        ansx[c]=b/g;
        ansy[c]=a/g;
        c++;
    }
    for(lint i=0;i<tc;i++)
        cout<<ansx[i]<<" "<<ansy[i]<<endl;
	return(0);
}
