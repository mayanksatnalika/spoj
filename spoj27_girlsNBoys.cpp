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
	lint b=5,g=5,c=0,t,i,bfx,ans[1000]={0};
	while(1)
    {
        cin>>b>>g;
        if(b!=-1)
        {
                    if(g>b)
        {
            t=g;
            g=b;
            b=t;
        }

        bfx=b/(g+1);
        if(g==b&&g!=0)
            ans[c]=1;
        else if(b==0&&g==0)
            ans[c]=0;
        else if((bfx*(g+1))==b)
            ans[c]=bfx;
        else
            ans[c]=bfx+1;
       c++;}
        else
            break;
    }
   for(i=0;i<c;i++)
        cout<<ans[i]<<endl;
	return(0);
}
