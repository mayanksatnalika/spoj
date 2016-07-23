/* ths file contains a working solution 0(n/2) solution for spoj problem squares*/
#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	unsigned long long int n,i,j,ans=1,c;
	cin>>n;
	for(i=2;i<=n;i++)
    {
        c=0;
            for(j=1;j<=(i/2);j++)
                    if(i%j==0)
                        c++;
           // cout<<" for i "<<i<<"its "<<c/2+1<<endl;
                       ans=ans+(c/2)+1;
    }
    cout<<ans;
	return(0);
}
