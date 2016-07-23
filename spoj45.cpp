#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int len(char a[])
{
    int c=0;
    while(a[c]!='\0')
        c++;
    return(c);
}
int max(int a,int b)
{
    if(a>b)
        return(a);
    return(b);
}
int lcs(int k,int l)
{
    for(int k=0;k<l1;k++)
    {
        for(int l=0;l<l2;l++)
        {
           if(s1[k]==s2[l])
                ans[k+1][l+1]=ans[k-1+1][l-1+1]+1;
            else
                 ans[k+1][l+1]=max(ans[k-1+1][l+1],ans[k+1][l-1+1]);
        }
    }
}


int main()
{
	//your code here
	return(0);
}
