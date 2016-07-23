#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long int lint;
int ans[5000][5000]={0};

int max(int a,int b)
{
    if(a>b)
        return(a);
    return(b);
}
int lcs(int  s1[], int s2[],int l1,int l2)
{
    int maxi=0;

     for(int k=1;k<=l1;k++)
    {
        for(int l=1;l<=l2;l++)
        {

           if(s1[k-1]==s2[l-1])
                ans[k][l]=ans[k-1][l-1]+1;
            else
                 ans[k][l]=max(ans[k-1][l],ans[k][l-1]);
            if(ans[k][l] > maxi)
                    maxi = ans[k][l];
        }
    }
    //cout<<"maxi sis "<<maxi<<endl;
    return(maxi);
}


int main()
{
	//your code here
	int s1[5000],s2[5000];
	int c=0,tc=0;
	cin>>tc;

	while(c<tc)
    {
        s1[0]=5;s2[0]=5;
        int l1,l2=0;
         int max=0;
         int ct=1;
         cin>>s1[0];
         while(s1[ct-1])
        {
            cin>>s1[ct++];
        }
        l1=ct-1;
        //cout<<l1;
      while(s2[0]!=0)
        {
            cin>>s2[0];
          //  cout<<"zero s2 taken";
            ct=1;
            while(s2[ct-1])
            {
            cin>>s2[ct++];
            }
            l2=ct-1;
            int aab=lcs(s1,s2,l1,l2);
            if(aab>max)
                max=aab;
           // cout<<"max is "<<max<<endl;


        }
        cout<<max<<endl;
        c++;
    }
	return(0);
}
