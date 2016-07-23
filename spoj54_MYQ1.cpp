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
	lint c=0, tc ,n;
	cin>>tc;
	while(c<tc)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"poor conductor"<<endl;
        }
        else
        {
            cout<<(n-1)/5 + 1;

        }
        c++;
        09449474904
    }
	return(0);
}
