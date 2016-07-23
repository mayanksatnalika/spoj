#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
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
    q.push(temp)
    while(!q.empty(q))
    {
        nd = q.front();
        q.pop();
        rr[4]={1,-1,0,0};
        cc[4]={0,0,-1,1};
        for(int i=0;i<4;i++)
        {
            tmpx= nd.r+ rr[i];
            tmpy= nd.c+ rr[c];
            if(tmpx>=r|| tmpx<0||tmpy>=c||tmpy<0)
                continue;
            if((mat[tmpx][tmpy]=='B' && kb==0) || (mat[tmpx][tmpy]=='Y' && ky==0))
                continue;
            if((mat[tmpx][tmpy]=='G' && kg==0) || (mat[tmpx][tmpy]=='R' && kr==0))
                continue;

            if(mat[tmpx][tmpy]=='g')
                kg=1;
            if(mat[tmpx][tmpy]=='b')
                kb=1;
            if(mat[tmpx][tmpy]=='r')
                kr=1;
            if(mat[tmpx][tmpy]=='y')
                ky=1;
            if(mat[tmpx][tmpy]=='#')
                continue;

            temp.r = tmpx;
            temp.c= tmpy;
            temp.depth = nd.depth+1;
            visit[temp.r][temp.c] = temp.depth;
            push(temp);
        }
    }
    return(0);
}


int main()
{
	//your code here

	cin>>r>>c;
	while(r)
    {
        for(int i=0;i<r;i++)
         {
             for(int j=0;j<c;j++)
                {
                    cin>>mat[i][j];
                    if(mat[i][j]=='*')
                    {begr=i;begc=j;}
                    if(mat[i][j]=='X')
                    {endr[ind++]=i;endc[ind++]=j;}
                }
         }
        cout<<"input taken"<<endl;
        bfs(begr,begc);
    }
	return(0);
}
