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
	lint c=1,a[6];
	while(cin>>a[0])
    {
        for(int i=1;i<4;i++)
                    cin>>a[i];
        sort(a,a+4);
        cout<<"Case "<<c<<": "<<a[2]+a[3]<<endl;
        c++;
    }
	return(0);
}
