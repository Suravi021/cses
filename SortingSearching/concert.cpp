#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    int n,m;
    cin >> n >> m;
    vector<ll> tickets(n), price(m);
    ll ans = 0, pt =0;
    for(int i=0; i<n; i++)
    {
        cin >> tickets[i];
    }
     for(int i=0; i<m; i++)
    {
        cin >> price[i];
    }
    sort(tickets.begin(),tickets.end());

    for(ll p: price)
    {
        if(tickets[pt] <= p)
        {
        
        pt += 1;
        }

    }
    return 0;


}