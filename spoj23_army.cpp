#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> vect;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	int ans[1000]={0},tc,c=0,n,m,b[10000],g[10000],i;
	cin>>tc;
	while(c<tc)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
            cin>>g[i];
        for(i=0;i<m;i++)
            cin>>b[i];

        sort(g,g+n);
        sort(b,b+m);

        if(g[n-1]>=b[m-1])
            ans[c]=1;

        c++;
    }
    for(i=0;i<tc;i++)
    {
        if(ans[i]==1)
            cout<<"Godzilla"<<endl;
        else
            cout<<"Mechagodzilla"<<endl;
    }
	return(0);
}
