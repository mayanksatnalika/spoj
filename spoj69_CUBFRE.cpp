#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	lint tc,cas=0;
	int mar[1000005]={0};
	lint ind[1000005];
	cin>>tc;
	for(lint i=2; (i*i*i) <1000000; i++)
    {

            for(lint j = i*i*i; j< 1000000; j=j+(i*i*i))
                mar[j]=-1;

    }
    lint k=0;
    for(lint i=0; i<1000000 ; i++)
    {
        if(mar[i]==(0))
        {ind[i] = k; k++;}
    }

    while(cas<tc)
    {
        lint no;
        cin>>no;

        if(mar[no]==-1)
            cout<<"case "<<cas+1<<": "<<"Not Cube Free"<<endl;
        else
            cout<<"case "<<cas+1<<": "<<ind[no]<<endl;
        cas++;
    }
	return(0);
}
