#include<iostream>
#include<cmath>
#include <string>     // std::string, std::stoi
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	lint tc=1,c=0,b1,b2,non_num=0;
    cin>>tc;

	cin.ignore();
	while(c<tc)
    {
        non_num=0;
        //cout<<"give input "<<endl;
       char str[1000],w1[1000],w2[1000],w3[1000];
       cin.getline(str,29);
       //cout<<"inputed"<<endl;;
        if(!isalnum(str[0]) )
            continue;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='+')
                b1=i;
            if(str[i]=='=')
                b2=i;
        }

        int k=0;
        for(int i=0;i<b1-1;i++)
        {
            w1[k++]=str[i];
            if(isalpha(w1[k-1]))
                     non_num = 1;
          //  cout<<w1[i]<<endl;
       }
        w1[k]= '\0';
         k=0;

        for(int i=b1+2;i<b2-1;i++)
        {

            w2[k++]=str[i];
            if(isalpha(w2[k-1]))
            {
                   non_num = 2;
                   w2[0] = '\0';  }

        }
         w2[k]= '\0';
         k=0;

        for(int i=b2+2;str[i]!='\0';i++)
        {
            w3[k++]=str[i];
            if(isalpha(w3[k-1]))
                          non_num = 3;
        }
         w3[k]= '\0';

        if(non_num==1)
        {
            lint num1=atoi( w2);
            lint num2=atoi( w3 );
           //             cout<<"num1 and num2 is "<<num1<<" "<<num2<<endl;

            cout<<(num2-num1)<<" + "<<num1<<" = "<<num2<<endl;;
        }
        if(non_num==2)
        {
            lint num1=atoi( w1 );
            lint num2=atoi( w3 );
           // cout<<"num1 and num2 is "<<num1<<" "<<num2<<endl;

            cout<<num1<<" + "<<(num2-num1)<<" = "<<num2<<endl;;

        }
        if(non_num==3)
        {
            lint num1=atoi( w1 );
            lint num2=atoi( w2);
           // cout<<"num1 and num2 is "<<num1<<" "<<num2<<endl;
            cout<<num1<<" + "<<num2<<" = "<<num2+num1<<endl;

        }
//        cout<<"displayed";

    c++;
    }
	return(0);
}
