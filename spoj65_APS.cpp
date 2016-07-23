#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int isprime[10000001];
int pf[10000001]={0};
lint ans[10000001]={0};
int main()
{
	//your code here 10000005
	lint i=0;

	for(lint i=0;i<10000001;i++)
        isprime[i]=1;
        //cout<<"do"<<endl;
	for(lint i=2;i<10000001; i++)
    {
        if(isprime[i])
        {
            pf[i] = i;
                  for(lint j=i*2; j< 10000001; j=j+i)
                  {
                      if(isprime[j]==1)
                      {
                        isprime[j]=0;
                        pf[j]= i ;
                      }
                  }
        }
    }
    //cout<<"done"<<endl;
    ans[0]=0;
   ans[1]=0;
  // cout<<"pf of 7458 7459 7460 "<<pf[7458]<<" "<<pf[7459]<<" "<<pf[7460]<<endl;;
   for(lint i=2;i<10000000;i++)
      ans[i]= pf[i]+ ans[i-1];
    lint tc=0,cas=0,n=0;
    cin>>tc;

    while(cas <tc)
    {
        cin>>n;
        cout<<ans[n]<<endl;
        cas++;
    }
	return(0);
}
