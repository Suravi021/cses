#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    int n;
    cin >> n;
    long long ans = 1;
    long long mod = 1000000007;
    for(int i = 0; i < n; i ++)
    {
            ans *= 2;
            ans %= mod;
    }
    cout << ans << '\n';
    return 0;
}