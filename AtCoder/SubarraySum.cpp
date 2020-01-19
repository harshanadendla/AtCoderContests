#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n,k,s,x;
    cin>>n>>k>>s;
    (s==1e9) ? x=s-1 : x=s+1; 
    for(ll i=0;i<k;i++) cout<<s<<" ";
    for(ll i=1;i<=n-k;i++) cout<<x<<" ";
    return 0;
}