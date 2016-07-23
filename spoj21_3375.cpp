#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> vect;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
    lint tc,c=0,n,flag,f,no,i,s=0,ans[100000]={0};
    cin>>tc;

    while(c<tc)
    {
        cin>>n>>f;
        s=0;
        flag=0;
        vect v(0,0);
        for(i=0;i<f;i++){
                cin>>no;
            v.push_back(no);
        }
        sort(v.begin(),v.end());
        for(i=v.size()-1;i>=0;i=i-1){
           s=s+v[i];
            if(s>=n){
                flag=1;
                break;}
        }
       if(flag==1)
            ans[c]=v.size()-i;
        c++;
    }
        for(i=0;i<tc;i++){
            cout<<"Scenario #"<<i+1<<":"<<endl;
                if(ans[i]!=0)
                    cout<<ans[i]<<endl<<endl;
                else
                    cout<<"impossible"<<endl<<endl;
        }

	//your code here
	return(0);
}
