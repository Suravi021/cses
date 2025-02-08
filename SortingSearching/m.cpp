#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    int people, flats;
    ll k;
    cin >> people >> flats >> k;
    vector<ll> want(people), available(flats);
    for(int i=0; i<people; i++)
        cin >> want[i];
     for(int i=0; i<flats; i++)
        cin >> available[i];
    sort(want.begin(),want.end());
    sort(available.begin(),available.end());

    people -= 1;
    ll alloted = 0;
    for(ll flat: want)
    {


    }

