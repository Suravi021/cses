#include <bits/stdc++.h>
using namespace std;

#define ll long long 
ll tow(int n)
{
    if (n == 1)
        return 1;
    return tow(n-1) * 2 + 1;
}

int main()
{
    int n;
    cin >> n;

    ll t = tow(n);
    cout << t << endl;
    return 0;

}