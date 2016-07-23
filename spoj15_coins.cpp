#include<iostream>
#include<cmath>
using namespace std;
typedef unsigned long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
 lint ans[5000000]={0};
lint coins(lint n)
{
    //cout<<" gone for "<<n<<endl;
    if(n==0)
        return(0);
    else if(!ans[n])
        ans[n]=max(n,coins(n/2)+coins(n/3)+coins(n/4));
    return(ans[n]);

}
int main()
{

	lint ans2[50],i;
	for(i=0;i<10;i++){
	lint n;
	cin>>n;
	ans2[i]=coins(n);}
	for(i=0;i<10;i++)
        cout<<ans2[i]<<endl;
	return(0);
}
