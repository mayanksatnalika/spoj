#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
lint gcd(lint a,lint num)
{
    if(num==0)
        return(a);
    gcd(num,a%num);
}
int main()
{

	lint tc,c=0,a,num=0,ans[10000];
	char b[300];
	cin>>tc;
	while(c<tc)
    {
        cin>>a>>b;
        num=0;
        if(a==0)
        {
            //for(lint i=0;b[i]!='\0';i++)
                   cout<<b<<endl;
        }
        else{
        for(lint i=0;b[i]!='\0';i++)
        {
           num=(num*10+(b[i]-'0'))%a;
        }
        ans[c]=gcd(a,num);
        cout<<ans[c]<<endl;}
        c++;
    }
   // for(lint i=0;i<tc;i++)
    //    cout<<ans[i]<<endl;
	return(0);
}
