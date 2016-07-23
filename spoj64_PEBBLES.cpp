#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int flip( char &ch )
{
    if(ch=='0')
        ch='1';
    else
        ch='0';
    return(0);
}
int main()
{
	//your code here
	string str;
	lint c=1;
	while(cin>>str)
    {
        lint doflip=0,ans=0,l=0;
        l =str.length();
        //cout<<"length is "<<l<<endl;
        for(lint i=0; i<l; i++)
        {
            if(doflip)
                flip(str[i]);
            if(str[i]=='1')
            {
                //doflip=1;
                flip(str[i]);
                doflip++;
                doflip= doflip%2;
                ans++;
                //cout<<"doflip is "<<doflip<<" char is "<<str[i]<<endl;
            }
        }

        cout<<"Game #"<<c<<": "<<ans<<endl;
        c++;
   }
	return(0);
}
