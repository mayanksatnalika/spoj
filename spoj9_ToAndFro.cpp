#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	lint n=0,i,j,l,ro,pos,ctr[200]={0},tc=0;
	char str[200],ans[200][200],str2[1000][200]={'\0'};
	while(n!=0)
    {
        pos=0;
        cin>>n;
        if(n!=0){
        cin>>str;
        l=strlen(str);
        ro=l/n;
        for( i=0;i<ro;i++)
        {
            if(i%2==0)
            {
                for( j=0;j<n;j++){
                    ans[i][j]=str[pos];
                pos++;
                }
            }
            else
            {
                for( j=n-1;j>=0;j--){
                    ans[i][j]=str[pos];
                pos++;
                }
            }
        }

       for(i=0;i<n;i++)
        {
            for(j=0;j<ro;j++){
                str2[tc][ctr[tc]]=ans[j][i];
                ctr[tc]++;
                }

        }

        tc++;
        }
    }
    cout<<tc;
   for(int i=0;i<tc;i++)
    {
        cout<<str2[i];
        cout<<endl;
    }
	return(0);
}
