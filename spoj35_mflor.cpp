#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	string str;
	while(1)
    {
        getline(cin,str);
        if(str[0]!='*')
        {
            int diff=0;
            char ch=str[0];
            if(ch>=97)
                diff=-32;
            else
                diff=32;
            int f=1;
            for(lint i=0;str[i]!='\0';i++)
            {
                if(str[i]==' ')
                   {
                        if(str[i+1]!=ch&&str[i+1]!=ch+diff)
                        {f=0;
                        break;}
                    }
            }
            if(f)
                cout<<"Y"<<endl;
            else
                cout<<"N"<<endl;

        }
        else
            break;
    }

	return(0);
}
