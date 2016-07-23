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
    int n;
    cin>>n;
    //your code here
	while(n!=0)
    {
        int c=0;
        for(int i=n;i>1;i=i/2)
            c++;
        cout<<c<<endl;
        cin>>n;
    }
	return(0);
}
