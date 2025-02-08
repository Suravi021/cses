#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n, max;
    cin >> n >> max;
    vector<ll> weights(n);
    for(int i =0; i < n; i++)
    {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end());
    ll right = n-1, left = 0;
    while(right > left)
    {
        if(weights[right] + weights[left] <= max)
        {
            n--;
            right--;
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << n << endl;

    return 0;  

}