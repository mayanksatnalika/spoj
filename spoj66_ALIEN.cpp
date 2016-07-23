#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<stdio.h>
#include<algorithm>
using namespace std;
typedef long long int lint;
#define loop(x,a,b) for(int x = a; x < b; x++)
int main()
{
	//your code here
	lint tc=0,cas=0;
	cin>>tc;
	while(cas<tc)
    {
        lint n,max_allw,nop[100005]={0};
       // cin>>n>>max_allw;
        scanf("%ld",&n);
        scanf("%lld",&max_allw);
        for(int i=0;i<n;i++)
        {
            lint no;
            scanf("%lld",&no);
            nop[i]=no;
        }
        lint max_here=0 , max_final=0, ppl=0,ppl_min=max_allw,x=0;
        for(int i=0;i<n;i++)
        {
            lint ind=i;
            //ppl = 0;
            if(ppl+nop[i]<=max_allw)
            {
                ppl=ppl+nop[i];
                max_here++;
            }
            else
            {

                while(ppl+nop[i]>max_allw)
                {
                    ppl = ppl - nop[x];
                    x++;
                    max_here--;
                }
                ppl+=nop[i];
                max_here++;
            }
              if(max_here>max_final || (max_here==max_final && ppl<ppl_min))
                {
                    max_final=max_here;
                    ppl_min=ppl;
                }

        }
        printf("%lld %lld \n",ppl_min,max_final);
        //        cout<<ppl_min<<" "<<max_final<<endl;;
        cas++;
    }
	return(0);
}
