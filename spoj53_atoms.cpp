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
	unsigned long long int tc,c=0,n,k,m;
	cin>>tc;
	while(c<tc)
    {
        cin>>n;
        cin>>k;
        cin>>m;
        lint i=0;
       for( i =0;i>-1;i++)
       {
           n= n*k;

           if(n>m)
            break;
       }
        cout<<i<<endl;
        c++;
    }
	return(0);
}
