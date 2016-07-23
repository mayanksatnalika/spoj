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
	int n,sol=0,j,k,a[2005];
	cin>>n;
	while(n)
    {
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=n-1;i>=0;i--)
        {
            j=0;
            k=i-1;
            while(j<k)
            {
                while(j<k && a[j]+a[k]>=a[i])
                    k--;
                sol=sol+k-j;
                j++;
            }
        }
        cout<<sol<<endl;
        sol=0;
        cin>>n;
    }
	return(0);
}
