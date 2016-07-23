#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int bfs(vector<int> graph[], int start, int n)
{

    queue<int> q;
    q.push(start);
    while(!q.empty())
    {
        node = q.front();
        q.pop();
        visited[node] = 1;
        for(int i=0;i< graph[node].size(); i++)
              {
                  if(visited[graph[node][i])
                    return(0);
                  q.push(graph[node][i]);

              }
               counter++;
    }

        if(counter==n)
                return(1);
        return(0);
}


int main()
{
	//your code here
	lint n,m;
	vecctor graph[int n];
	for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        graph[a].push_back(b);
    }
    bfs(graph,1,n-1);
	return(0);
}
