#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
    int cae=0;
    lint fsum[10][150]={0};
     lint fdiff[10][150]={0};
     lint szsum[150];
     lint szdiff[150];
	while(cae<1){
            int pos=0;
            char charno[150],charext[150];
            for(int i=0;i<150;i++)
            {
                charno[i]='\0';
                charext[i]='\0';
            }
    lint no,no2,i,ans[150]={0},num[150]={0},dig=0,num2[150]={0},ans2[150]={0},sum[150]={0};
    cin>>charno;
    dig=strlen(charno);
	no2=no;
	lint no3=no;
	for(i=dig-1;i>=0;i--)
     {
           num[i]=charno[i]-48;
     }
    for(i=0;i<dig;i++)
     {
         ans[i]=num[i]/2;
         if(i!=dig-1)
                num[i+1]=(num[i]%2)*10+num[i+1];
     }
    lint t;
    for(i=0;i<dig/2;i++)
    {
        t=ans[i];
        ans[i]=ans[dig-1-i];
        ans[dig-1-i]=t;
    }
       //  now for the extra candies

    lint ext;
    cin>>charext;
    lint db=dig;
    dig=0;
    no2=ext;
	dig=strlen(charext);
    for(i=dig-1;i>=0;i--)
     {
           num2[i]=charext[i]-48;
     }
    for(i=0;i<dig;i++)
     {
         ans2[i]=num2[i]/2;
         if(i!=dig-1)
                num2[i+1]=(num2[i]%2)*10+num2[i+1];
     }
     for(i=0;i<dig/2;i++)
    {
        t=ans2[i];
        ans2[i]=ans2[dig-1-i];
        ans2[dig-1-i]=t;
    }
    //reversing candies array

    int ans2cp[150]={0};
    int anscp[150]={0};
    for(i=0;i<db;i++)
    {
        ans2cp[i]=ans2[i];
        anscp[i]=ans[i];
    }
    //now all the main and extra are stored in base and extra respectively;
    //now below finding sum
    for(i=0;i<db;i++)
    {
        sum[i]=(ans[i]+ans2[i])%10;
        ans[i+1]=ans[i+1]+(ans[i]+ans2[i])/10;
        //cout<<sum[i];
    }
     //now below 3 lines checking for odd candies case
    if((charno[db-1]-48)%2==1)
    {      sum[0]++;
        }

      for(i=0;i<db;i++){
        if(sum[i]>=10)
            sum[i]=sum[i]%10;
        sum[i+1]=sum[i+1]+sum[i+1]*10;
        }



    //now below converting sum starting with 0 to trim and remove 0 ans save in fsum[cae][]
    for(i=db-1;i>=0;i--)
    {
        if(sum[i]!=0){
            pos=i;
        break;}
    }


    for(i=0;i<=pos;i++)
    {
        fsum[cae][i]=sum[i];
       // cout<<fsum[cae][i];
    }
    szsum[cae]=pos;
// till now addtion of extra candies done
// now starting finding difference
    lint diff[150]={0};
    pos=0;
    for(i=0;i<db;i++)
    {
            if(anscp[i]<ans2cp[i]){            anscp[i]=10+anscp[i];
        anscp[i+1]--;}
        diff[i]=(anscp[i]-ans2cp[i]);
    }
    for(i=db-1;i>=0;i--)
    {

        if(diff[i]!=0){
            pos=i;
        break;}
    }

    for(i=0;i<=pos;i++)
    {
        fdiff[cae][i]=diff[i];
       // cout<<fdiff[cae][i];

    }
    szdiff[cae]=pos;
	cae++;
	}
for(int i=0;i<1;i++)
 {
    for(int j=szsum[i];j>=0;j--)
          cout<<fsum[i][j];
      cout<<endl;
      for(int j=szdiff[i];j>=0;j--)
          cout<<fdiff[i][j];
       cout<<endl;
 }
return(0);
}
