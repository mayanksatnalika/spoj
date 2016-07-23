#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	int tc,c=0,n,x,temp,dig,n2,i=1,sz[100];
	int ans[100][160];

	cin>>tc;
	while(c<tc)

    {

        cin>>n2;
        if(n2==1)
        {
            ans[c][0]=1;
            sz[c]=1;
            //c++;
        }
        else{
        int pro[160];
        int m=0;
       // int ans=0;
        int n=n2;
        int index=0;
        while(n>0)
        {
            pro[m]=n%10;
            n=n/10;
            m++;
        }
        int dig=m;
         index=0;
        for(i=1;i<n2;i++){
           index=0;

             int temp=0;

            while(index<dig){
             int x=pro[index]*i+temp;
              pro[index]=x%10;
              temp=x/10;
              index++;
            }

            while(temp>0)
            {

                pro[index]=temp%10;
                temp=temp/10;
                index++;
            }

            dig=index;
        }
    for(int k=0;k<index;k++)
       ans[c][k]=pro[k];
    sz[c]=index;
    }
            c++;

    }
    for(int i=0;i<tc;i++)
    {
        for(int j=sz[i]-1;j>=0;j--)
                cout<<ans[i][j];

        cout<<endl;
    }
    return(0);
}
