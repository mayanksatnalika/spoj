#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> vect;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
struct stak
{
    lint a[1005];
    int top;
}stk;
void push(int x)
{
    stk.top++;
    stk.a[stk.top]=x;
}
int main()
{
    lint n=5,c=0,f=0,i=0,j=0,oua=0,ina[1005];
    int ans[10000]={0};

    cin>>n;
    while(n!=0)
    {
        oua=0;
        stk.top=-1;
        f=0;
        for(i=0;i<n;i++)
            cin>>ina[i];
        i=0;
        while(1)
        {
            if(ina[i]==oua+1)
            {
                //cout<<"done 1 "<<endl;
                 i++;
                 oua++;
            }
            else if (stk.a[stk.top]==oua+1)       //pop
            {
                //cout<<"done 2 "<<endl;
                oua++;
                stk.top--;
            }
            else if(ina[i]<stk.a[stk.top] || stk.top==-1)       //push
            {
               //cout<<"done 3 "<<endl;
            push(ina[i]);
            i++;
            }
            else{
                //cout<<"not possible";
                break;
                }
            /*cout<<"present stack scenario is "<<endl;
            for(j=0;j<=stk.top;j++)
                cout<<stk.a[j]<<" ";
                cout<<endl;*/
            if(oua==n)
            {   f=1;
                break;
            }
        }
        ans[c]=f;
        c++;
        cin>>n;
    }
   for(i=0;i<c;i++)
        {
            if(ans[i]==1)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
	return(0);
}
