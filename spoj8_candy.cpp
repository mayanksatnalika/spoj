#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
    lint n,a[10000],avg,c=0,sum,ans[2000],s;
	while(1)
    {
        cin>>n;
        sum=0;
        s=0;
        if(n==-1)
                break;
        for(lint i=0;i<n;i++)
        {           cin>>a[i];
                sum=sum+a[i];
        }
        avg=sum/n;
        if(avg*n==sum){
        for(lint i=0;i<n;i++)
            {
                if(a[i]>avg)
                    s=s+a[i]-avg;

            }
            ans[c]=s;

        }
        else
            ans[c]=-1;
        c++;


    }
    for(lint i=0;i<c;i++)
        cout<<ans[i]<<endl;
	return(0);
}
