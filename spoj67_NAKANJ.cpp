#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int visit[15][15];
int stx,sy,enx=0,ey=0;
struct node
{
    int r,c,depth;
};

int bfs(int x,int y)
{
    queue<node> q;
    node temp;
    temp.r=x;
    temp.c=y;
    temp.depth=0;
    q.push(temp);
    //cout<<"in bfs"<<endl;

    while(!q.empty())
    {
        node k = q.front();
        q.pop();
        int r[8]={-1,1,-1,1,-2,-2,2,2};
        int c[8]={-2,-2,2,2,-1,1,-1,1};
        for(int i=0;i<8;i++)
        {
            int tmpx = k.r + r[i];
            int tmpy = k.c + c[i];
            if(tmpx<0|| tmpx>7|| tmpy<0|| tmpy>7 || visit[tmpx][tmpy]!=-1)
                continue;
            temp.r = tmpx;
            temp.c = tmpy;
            temp.depth= k.depth+1;
            visit[tmpx][tmpy]= temp.depth;
            /*if(visit[enx][ey]!=-1)
            {
                cout<<"hold ";
                cout<<"it is ";
                cout<<visit[enx][ey]<<" "<<visit[tmpx][tmpy]<<endl;

               // return(0);
            }
            */
           // cout<<"pushed "<<temp.r<<temp.c<<temp.depth<<endl;
            q.push(temp);
         }
    }

  //  cout<<"out bfs"<<endl;
    // cout<<enx<<ey<<visit[enx][ey]<<" "<<endl;
    //cout<<"now return";
    return(0);
}
int main()
{
	//your code here


	lint tc=0,cas=0;
	cin>>tc;
	while(cas<tc)
    {
        for(int i=0;i<15;i++)
        {
            for(int j=0;j<15;j++)
                visit[i][j]=-1;
        }

        char sx,ex;
        cin>>sx>>sy>>ex>>ey;
        sy--;
        ey--;
        stx= sx-97;
        enx= ex-97;
  //      cout<<"start "<<stx<<sy<<endl;
  //      cout<<"end "<<enx<<ey<<endl;
        visit[stx][sy]=0;
        bfs(stx,sy);
       cout<<visit[enx][ey]<<endl;



        cas++;
    }
    return(0);
}
