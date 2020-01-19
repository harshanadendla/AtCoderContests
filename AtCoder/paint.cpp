#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ll h,w,n;
  cin>>h>>w>>n;
  cout<<ceil( ((1.0)*n)/max(h,w) )<<"\n";
  return 0;
}