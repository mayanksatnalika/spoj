#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	int t;
	cin>>t;
    int c=0;
	while(c<t)
    {
        int n;
        cin>>n;
        vector<string> v;
        for(int i=0;i<n;i++)
        {
           string str;
           cin>>str;
           v.push_back(str);
        }
        sort(v.begin(),v.end());
        c++;
        int f=1;
        for(int i=0;i<n-1;i++)
        {
            if((v[i+1].find(v[i])==0) && v[i]!=v[i+1])
                {
                        f=0; break;
                }
        }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
	return(0);
}
