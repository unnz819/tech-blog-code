/***
CSES Problemset: https://cses.fi/problemset/task/2162
***/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=1, y=0;
    while(n>0){
        for(int i=2;i<=n;i+=2){
    		cout<<x*i+y<<' ';
    	}
    	if(n&1) 
    	    cout<<x+y<<' ',y += x;
    	else y-=x;
    	x<<=1;
    	n>>=1;
    }
    return 0;
}
