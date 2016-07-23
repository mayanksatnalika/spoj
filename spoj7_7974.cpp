#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
    lint n,c=0,ans[100000]={0},a1,a2,a3,ch[100000]={0};
	cin>>a1>>a2>>a3;
    while(a1!=0||a2!=0||a3!=0)
    {
        if(2*a2==(a1+a3))
        {

            ans[c]=a3+(a3-a2);
        }
        else
        {

             ch[c]=1;
            ans[c]=a3*(a3/a2);


        }
        cin>>a1>>a2>>a3;
        c++;
    }
    for(lint i=0;i<c;i++)
    {
        if(ch[i])
                    cout<<"GP"<<" "<<ans[i]<<endl;
        else
                    cout<<"AP"<<" "<<ans[i]<<endl;}
	return(0);
}
