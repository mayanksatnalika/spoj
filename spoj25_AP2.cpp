#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	lint tc,c=0,x,y,s,ansn[105],ansd[105],ansa[105],i,j,di;
	cin>>tc;
	while(c<tc)
    {
        cin>>x>>y>>s;
        ansn[c]=2*s/(x+y);
        //cout<<ansn[c]<<endl;
        ansd[c]=(y-x)/(ansn[c]-5);
        //cout<<ansd[c]<<endl;
        ansa[c]=x-2*ansd[c];
       // cout<<ansa[c]<<endl;
        c++;
    }
    for(i=0;i<tc;i++)
    {
        cout<<ansn[i]<<endl;
        for(j=0;j<ansn[i];j++)
        {
            di=(ansa[i]+ansd[i]*j);
            cout<<di<<" ";
        }
        cout<<endl;
    }
	return(0);
}
