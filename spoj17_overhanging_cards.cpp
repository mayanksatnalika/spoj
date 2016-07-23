#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	float n,s,c;
	lint cas=0,ans[500];
	cin>>n;
	while(n!=0.0)
    {
        s=0;
        c=2;
        while(s<=n)
            {
                s=s+(1/c);
             //   cout<<" s is "<<s<<endl;
                c++;
            }
            ans[cas]=c-2;
            cin>>n;
            cas++;
    }
    for(int i=0;i<cas;i++)
        cout<<ans[i]<<" card(s)"<<endl;
	return(0);
}
