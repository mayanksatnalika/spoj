#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int dp(char a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]=='0')
            ans[i][i]=0;
        else
            ans[i][i]=1;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                if(a[k]=='0')
                    z++;
                else
                    o++;
            }
            if(o>z)
                ans[i][j]=j-i+1;
            else
            {
                for(int k=i;k<j;k++)
                {
                    if(maxi(ans[i][k],ans[k+1][j])>maxm)
                        maxm=maxi(ans[i][k],ans[k+1][j]);
                }
                ans[i][j]=maxm;
            }
        }

    }
}
int main()
{
	//your code here;

	cin>>tc;
	while(c<tc)
    {
        cin>>n
        cin>>str;
        for(int i=0;i<n;i++)

    }
	return(0);
}
