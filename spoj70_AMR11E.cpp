#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	int pr[3005]={0}, ft[3005]={0};
	for(int i=2; i< 3000; i++)
    {
        if(pr[i]==0)
        {

            for(int j=i*2; j<3000; j=j+i)
                {ft[j]++; pr[j]=-1;}

        }
    }
    int k=0,ans[3005]={0};
    for(int i=0 ; i<3000 ; i++)
    {
        if(ft[i]>=3 && k>290)
        {
            ans[k++]=i;
            cout<<ans[k-1]<<endl;
        }
    }
	return(0);
}
