#include<cmath>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	lint no=5,i,pos,c=0,n,ans[100005];
	while(no!=0)
    {
        int v[100005];
        int v2[100005];
        cin>>no;
        int f=0;
        for(i=1;i<=no;i++){
                cin>>n;
                v[i]=n;
            }
        for(i=1;i<=no;i++)
             v2[v[i]]=i;
        for(i=1;i<=no;i++){
            if(v[i]!=v2[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            ans[c]=1;
        c++;
    }

    for(i=0;i<c-1;i++)
    {
        if(ans[i]==1)
            cout<<"not ambiguous"<<endl;
        else
            cout<<"ambiguous"<<endl;
    }

	return(0);
}
