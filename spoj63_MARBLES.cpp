#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef unsigned long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)

lint findc(lint n, lint r) {
    if(r > n / 2) r = n - r;
    lint ans = 1;
    lint i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int main()
{
	//your code here
	lint tc,c=0;
	cin>>tc;
	while(c<tc)
    {
        lint r,n;
        cin>>n>>r;

        lint ans = findc(n-1,r-1);
        cout<<ans<<endl;
        c++;
    }
	return(0);
}
