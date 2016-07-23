#include<iostream>
using namespace std;
typedef unsigned long long int lint;
int main()
{
    lint b,e,res,ans[100]={0},tc,cas=0,i;
    cin>>tc;
    while(cas<tc){
	cin>>b>>e;
	res=1;
	while(e>0)
    {
        if(e%2==1)
        res=(res*b)%10;
        b=(b*b)%10;
        e=e/2;
    }
    ans[cas]=res;
    cas++;
    }
    for(i=0;i<tc;i++)
        cout<<ans[i]<<endl;
   return(0);
}
