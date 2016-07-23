#include<iostream>
#include<cmath>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> vect;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	double n=9,ans;
	vector<double> v(0,0);
	while(n!=0)
    {
        cin>>n;
        ans=n*n/(2*3.1415926);
        v.push_back(ans);
    }
    for(int i=0;i<v.size()-1;i++)
        cout <<std::fixed<<std::setprecision(2) << v[i] <<endl;
	return(0);
}
