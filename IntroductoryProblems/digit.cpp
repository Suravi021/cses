#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n; cin >> n;

    while(n--)
    {
        long long k; cin >> k;
        long long m = 10;
        long long i = 1;
        long long whatever = 1;
        if ( k < 10)
        {
            cout << k << endl;
            continue;
         }
        while (k >= m)
        {
            whatever *= 10;
            k -= m;
            i ++;
            m = whatever * 9 * i;
        }
        long long mod = k % i;
        long long ehh = (k) / i;
        long long d = whatever + ehh;
        string c = to_string(d);
        cout << c[mod]<< endl;
    }
    return 0;
}