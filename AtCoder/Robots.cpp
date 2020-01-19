// greedy...sort wrt end points....then greedily choose an interval with lowwer end points
//as it ensures no overlapping of further overlapping.
// src: https://www.geeksforgeeks.org/maximal-disjoint-intervals/

#include<bits.stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n,a,b;
    cin>>n;
    vector<pair<ll,ll>> ranges(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        ranges[i].first=a+b;
        ranges[i].second=a-b;
    }
    sort(ranges.begin(),rangess.end());
    ll ans=1;
    ll curr=ranges[0].first;
    for(ll i=1;i<n;i++)
    {
        if(now<=ranages[i].second)
        {
            ans++;
            now=ranges[i].first;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
// sort(ranges.begin(),ranges.end());
// ll ans=1;
// ll now=ranges[0].first;
// for(ll i=1;i<n;i++)
// {
//     if(now<=ranges[i].second)
//     {
//         ans++;
//         now=ranges[i].first;
//     }
// }
// cout<<ans<<"\n";

// sort(ranges.begin(),ranges.end());
// ll ans=1;
// ll curr=ranges[0].first;
// for9ll i=1;i<n;i++)
// {
//     if(curr<=ranges[i].second)
//     {
//         ans++;
//         now=ranges[i].first;
//     }
// }
// cout<<ans<<"\n";