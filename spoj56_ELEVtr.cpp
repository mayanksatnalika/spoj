#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)

queue<int> Q;
int main()
{
	//your code here
	lint s,f,g,u,d;
	cin>>f>>s>>g>>u>>d;
    if(s==g)
        cout<<"0"<<endl;
    else
    {
        vector<int> visited(1000009,-1);
        visited[s] =0;
        Q.push(s);
        lint ans=0,flag=0;
        while(!Q.empty())
        {

            int k= Q.front();
            Q.pop();
            if(k+u <= f && visited[k+u]==-1)
            {              visited[k+u]= visited[k]+1;
                            Q.push(k+u);
                          //  cout<<"pushed "<<k+u<<" "<<visited[k+u]<<endl;
            }
            if(k-d >=1 && visited[k-d]==-1)
            {
                    visited[k-d]= visited[k]+1;
                    Q.push(k-d);
                    //cout<<"pushed "<<k-d<<" "<<visited[k-d]<<endl;
            }
            if(visited[g]!=-1 )
            {
                ans = visited[g];
                flag=1;
                break;
            }
        }
        //cout<<visited[g];
        if(flag)
                cout<<ans<<endl;
        else
                cout<<"use the stairs"<<endl;


    }
	return(0);
}
