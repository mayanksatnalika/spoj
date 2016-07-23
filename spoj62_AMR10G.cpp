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

	vector<long long int> vec;
	lint c=0,tc=0,n,k;
	cin>>tc;
	while(c<tc)
    {
        vec.clear();
        cin>>n>>k;
        for(lint i=0;i<n;i++)
        {        lint ht; cin>>ht;  vec.push_back(ht); }
        sort(vec.begin(),vec.end());
        lint mini= 1000000010 ;
          for(lint i=0;i <= n-k;i++)
          {
               if( vec[i+k-1] - vec[i] < mini)
           {                        mini = vec[i+k-1]-vec[i];

           }

          }
    cout<<mini<<endl;
    c++;


    }
	return(0);
}
