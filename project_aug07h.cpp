#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int t,j=0;
    long long int n,x,r,sq,y;
    scanf("%d",&t);
    
    while(t--){
        j++;
        cin>>n;
        sq=ceil(sqrt(n));
        r=sq*sq-n;
        if(r<sq){
            x=sq;
            y=r+1;
        }
        else{
            y=sq;
           x=2*sq-r-1;
        }
        if(sq%2==1){
            swap(x,y);
        }
        printf("Case %d: %lld %lld\n",j,x,y);
    }
}