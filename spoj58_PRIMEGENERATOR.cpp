#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef unsigned long long int lint;
short int isPrime[100005]={0};

lint primecheck(lint n)
{
    for(lint i=2;i<= n;i++)
    {
        if(isPrime[i])
        {
            for(lint j=2*i; j<= n ; j=j+i)
                isPrime[j]=0;
        }
    }
}
int main()
{
	//your code here
	for(lint i=2;i<100005;i++)
            isPrime[i]=1;
	lint tc=0,n,m,c=0;
	cin>>tc;
	while(c<tc)
    {
        cin>>m>>n;
        primecheck(lint(sqrt(n)));

        short int final_prime[100005]={0};
        for(lint i=0;i<100005;i++)
            final_prime[i]=1;
        for(lint i=2;i<= sqrt(n) ; i++)
        {
            if(isPrime[i])
            {
                lint cmp = m/i * i;

                for(lint j= cmp; j<= n; j= j+i)
                {
                        if(j<m)
                            continue;
                        final_prime[j-m]=0;
                }

            }
        }


        for(lint i=m;i<= sqrt(n);i++)
        {
            if(isPrime[i] && i!=1)
                cout<<i<<endl;

        }  //in former loop prime nos of root n has been et 0 in final_prime. Thus we print from isPrime



        //now all between ranges prime except original stored in final_prime
        for(lint i=m;i<=n;i++)
        {
                if(final_prime[i-m]==1 && i!=1)
                    cout<<i<<endl;
        }
        cout<<endl;
        c++;
    }
	return(0);
}
