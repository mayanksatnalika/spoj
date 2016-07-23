#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int bfs(vector<int> graph[], int start, int n)
{
    int visited[n+1];
    memset(visited,0,sizeof(visited));
    queue<int> q;
    int counter=0;
    q.push(start);
    while(!q.empty())
    {
        int node = q.front();
      //  cout<<"node is "<<node<<endl;
        q.pop();

        visited[node] = 1;
        //cout<<"size is "<< graph[node].size()<<endl;
        for(int i=0;i< graph[node].size(); i++)
              {
                  //cout<<"in loop";
                  if(visited[graph[node][i]])
                    return(0);
                  q.push(graph[node][i]);

            }
              counter++;
             // cout<<"couter is "<<counter<<endl;
    }
   // cout<<"dop";
        if(counter==n)
                return(1);
        return(0);
}


int main()
{
	//your code here
	lint n,m,a,b;
	cin>>n>>m;
	vector<int> graph[n+1];
	for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        graph[a].push_back(b);
    }
    //cout<<bfs(graph,1,n);
    if(bfs(graph,1,n))
            cout<<"YES";
    else
        cout<<"NO";
    //cout<<bfs(graph,1,n);
	return(0);
}
