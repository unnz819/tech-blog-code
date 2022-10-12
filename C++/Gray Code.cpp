/***
CSES Problemset: https://cses.fi/problemset/task/2205
***/

//code_author:jeevansh 
 #include<bits/stdc++.h> 
 #define ll long long 
 #define TWO_POWER 1<<n 
 using namespace std; 
  
 void gray_code(ll n){ 
         for(ll i=0;i<TWO_POWER;i++){ 
                 ll val=(i^(i>>1)); 
                 bitset<32> v1(val); 
                 string str=v1.to_string(); 
                 cout<<str.substr(32-n)<<"\n"; 
         } 
 } 
 int main(){ 
         #ifndef ONLINE_JUDGE 
         freopen("input.txt","r",stdin); 
         freopen("output.txt","w",stdout); 
         #endif 
  
         ios_base::sync_with_stdio(false); 
         cin.tie(NULL); 
         cout.tie(NULL); 
         ll n; 
         cin>>n; 
         gray_code(n); 
         return 0; 
 }
