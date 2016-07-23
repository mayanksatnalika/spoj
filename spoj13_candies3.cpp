#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
    unsigned long long int tc,n,ans[1000]={0},i,c=0,a;
    cin>>tc;
    while(c<tc){
        cin>>n;
        unsigned long long int s=0;
        for(i=0;i<n;i++)
        {cin>>a;
        s=(s+a);
        s=s%n;
        }
        if(s==0)
            ans[c]=1;

        c++;
    }
    for(i=0;i<tc;i++)
    {   if(ans[i]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

	return(0);
}
