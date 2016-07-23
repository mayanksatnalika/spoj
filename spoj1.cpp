#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
    lint tc,c=0,n1,n2,rn1,rn2,s=0,rs,ans[50];
    cin>>tc;
	while(c<tc)
    {
    cin>>n1>>n2;
    rn1=0;
    rn2=0;
    s=0;
    rs=0;
    while(n1>0)
    {
        rn1=rn1*10+n1%10;
        n1=n1/10;
    }
    while(n2>0)
    {
        rn2=rn2*10+n2%10;
        n2=n2/10;
    }
    s=rn1+rn2;
    while(s>0)
    {
        rs=rs*10+s%10;
        s=s/10;

    }
    ans[c]=rs;
    c++;
    }
    for(int i=0;i<tc;i++)
            cout<<ans[i]<<endl;
	return(0);
}
