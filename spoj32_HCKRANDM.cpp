/*
date 28 Feb 2015 1:00 a.m.
simple brute force.
just instead of finding each instance
sort and apply binary search to find the number
*/
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
	lint n,diff,a[100000],x,l,h,m,ct=0;
	cin>>n>>diff;
	for(lint i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);

    for(lint i=0;i<n;i++)
    {
        x=a[i]+diff;
        l=1;
        h=n-1;
        while(l<=h)
        {
            //m=l+(l+h+1)/2;
            m=l+(h-l+1)/2;
            if(a[m]<x)
                l=m+1;
            else if(a[m]>x)
                h=m-1;
            else{
                ct++;
                break;
            }
           // cout<<" l is and h is "<<l<<" "<<h<<endl;
        }
    }
    cout<<ct;
    return(0);
}
