//ID 1112
//NSTEPS - Number Steps
#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	lint tc,x,y,n1,n2,c=0,ans[100000]={0};
	cin>>tc;
	while(c<tc)
    {
        cin>>x>>y;
        if(y%2==0)
        {
            n1=2*y;
            n2=2*y+2;
        }
        else
        {
            n1=2*y-1;
            n2=2*y+1;
        }
        // cout<<n1<<n2<<endl;
        if(x==(y+2))
                ans[c]=n2;
        else if (x==y)
                ans[c]=n1;
        else
                ans[c]=-1;
        c++;
    }
    for(lint i=0;i<tc;i++){
            if(ans[i]!=-1)
            cout<<ans[i]<<endl;
    else
        cout<<"No Number"<<endl;
    }
	return(0);
}
