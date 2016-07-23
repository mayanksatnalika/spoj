#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
    lint tc=0,c=0,m,n;
    cin>>tc;

    while(c<tc)
    {
    cin>>m>>n;
    lint ctr=0;
    int isprime[32000];
    for(int i=0;i<32000;i++)
            isprime[i]=1;
    int arrpr[32000];
    for(int i=2;i*i<(32000);i++)
    {

        if(isprime[i]==1)
        {
            for(int j=2*i;j<(32000);j=j+i)
                isprime[j]=0;
                ctr++;

        }

    }
    int j=0;
    for(int i=0;i<32000;i++)
    {
        if(isprime[i])
        {
            arrpr[j]=i;
            j++;
        }
    }
     cout<<"d"<<endl;
    lint ispr[100000];
    for(lint i=0;i<100000;i++)
            ispr[i]=1;      //init to 1
    lint no;

    for(lint i=2;i<j;i++)
    {
        lint n2=arrpr[i];
        no=m/n2;
        no=no*n2;
        for(lint k=no;k<=n;k=k+n)//see comment below
        {
            if(k>=m){
                    cout<<k-m<<endl;
            ispr[k-m]=0;   }                 //change here no may  be less than m

        }

    }
    for(lint i=m;i<=n;i++)
    {
       if(ispr[i-m]==1)
              cout<<i<<endl;
    }

    c++;
    }
	return(0);
}
