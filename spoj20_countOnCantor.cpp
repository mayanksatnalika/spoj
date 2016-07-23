#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> vect;
typedef unsigned long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	lint i=0,j=0,n=0,ctr=0,f=0,tc,cas=0;
	cin>>tc;

	int ansr[25],ansc[25];
	lint noe[25];
	while(cas<tc){
    cin>>n;
	noe[cas]=n;
	f=0;
	i=0;
	j=0;
	// cout<<i<<j<<endl;
	ctr=1;
	if(ctr==n){
            ansr[cas]=i;
            ansc[cas]=j;
            f=1;
            }

	while(1){
	j++;
	// cout<<i<<j<<endl;
	ctr++;
	if(ctr==n){
            ansr[cas]=i;
            ansc[cas]=j;
           // cout<<i<<j<<endl;
            break;
            }
      while(j!=0)    {
        i++;j--;
	 //cout<<i<<j<<endl;
	ctr++;
	if(ctr==n){

            ansr[cas]=i;
            ansc[cas]=j;
            f=1;
           //cout<<i<<j<<endl;
           break;
           }}

	i++;
//	 cout<<i<<j<<endl;
	ctr++;
	if(ctr==n){

            ansr[cas]=i;
            ansc[cas]=j;
            //cout<<i<<j<<endl;
             break;
            }
	while(i!=0){
        i--;
        j++;
       //  cout<<i<<j<<endl;
        ctr++;
        if(ctr==n){

            ansr[cas]=i;
            ansc[cas]=j;f=1;
       //cout<<i<<j<<endl;
       break;
        }
    }
    if(f)
        break;
	}
	cas++;

	}
	for(i=0;i<tc;i++){
     cout<<"TERM "<<noe[i]<<" IS "<<ansr[i]+1<<"/"<<ansc[i]+1<<endl;
	}
	return(0);
}
