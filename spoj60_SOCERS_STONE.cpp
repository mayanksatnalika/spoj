#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
lint cost[105][105];
lint max_fun(lint a, lint b, lint c)
{
    if(a>b && a>c)
        return a;
    else if (b>a && b>c)
        return b;
    else
        return c;
}
lint dp( lint arr[][105], lint r, lint c)
{
    for( lint i=1;i<= r ;i++)
    {
        for( lint j=1 ; j<= c ; j++)
        {
            if(i== 1)
                cost[i][j]= arr[i][j];
            else
                cost[i][j]= max_fun( cost[i-1][j], cost[i-1][j-1], cost[i-1][j+1] ) + arr[i][j];
        }
    }
    lint maxi = -1;
    for(lint i=1; i <=c ;i++)
        if(cost[r][i]>maxi)
            maxi = cost[r][i];

    return maxi;
}
int main()
{
	//your code here
	lint ct,tc,r,c;

	lint arr[105][105];
	cin>>tc;
	ct=0;
	while(ct<tc)
    {
        for(lint i=0; i < 105 ; i++)
        {
            for(lint j=0;j<105;j++)
              {
                  arr[i][j]=-1; cost[i][j]=-1; }

        }
        cin>>r>>c;
        for(lint i=1;i<=r;i++)
        {      for(lint j=1;j<=c;j++)
             {             cin>>arr[i][j]; }  }

        lint ans = dp(arr,r,c);
        cout<<ans<<endl;
        ct++;
    }
	return(0);
}
