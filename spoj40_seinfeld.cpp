#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
struct stack{
int top;
char ch[2100];
}st;
int main()
{   string str;
    int t=0;
	int c=0;
	char chr;
	int i=0;
	st.top=0;
	getline(cin,str,'-');
	for(int j=0;str[j]!='\0';j++)
    {
        int c=0;
        char chr;
        st.top=0;
        //cout<<"j is "<<j<<endl;
	for(i=j;str[i]!=10;i++)
    {
     //cout<<"i is "<<i<<endl;
     chr=str[i];
     if(chr=='{')
        {
            st.top++;
            st.ch[st.top]=chr;
        }
        else
        {
            if(st.ch[st.top]=='{')
                st.top--;
            else
                c++;

        }
    }
    j=i;
    if(c%2==0)
        c=c/2;
    if(st.top%2==0)
        st.top=st.top/2;
    c=c+st.top;
    cout<<t<<". "<<c<<endl;
    t++;
    }
       	return(0);
}
