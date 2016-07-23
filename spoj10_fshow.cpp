#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	lint i,j,tc,c=0,temp,mh[1000],wh[1000],ans[10000],n;
	cin>>tc;
	while(c<tc)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>mh[i];
        for(i=0;i<n;i++)
            cin>>wh[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
            if(mh[j]>mh[j+1]){
                temp=mh[j];
                mh[j]=mh[j+1];
                mh[j+1]=temp;
            }
             if(wh[j]>wh[j+1]){
                temp=wh[j];
                wh[j]=wh[j+1];
                wh[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
        ans[c]=ans[c]+mh[i]*wh[i];
    c++;
    }
    for(i=0;i<tc;i++)
        cout<<ans[i]<<endl;

	return(0);
}
