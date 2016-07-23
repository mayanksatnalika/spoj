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
	int tc;
	cin>>tc;
	int c=0;
	string str;
	while(c<tc)
    {
        cin>>str;
        int i=str.length();
        cout<<(i-1)/2<<endl;
        c++;
    }
	return(0);
}
