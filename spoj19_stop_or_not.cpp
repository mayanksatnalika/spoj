#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> vect;
typedef unsigned long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	lint n,f=0;

	cin>>n;
	vect v(0,0);
	v.push_back(n);
	while(n>1)
    {
        if(n%2==0)
            n=n/2;
        else
            n=n*3+3;

        if (find(v.begin(), v.end(),n) != v.end() )
            {
                f=1;
                break;
            }
    v.push_back(n);
    }

    if(f==1)
        cout<<"NIE";
    else
        cout<<"TAK";
	return(0);
}
