#include <bits/stdc++.h>
using namespace std;
 
#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define testCases int tt; cin >> tt; for(int t=1;t<=tt;++t)
#define wfile(fileName) freopen(fileName, "w", stdout)
#define rfile(fileName) freopen(fileName, "r", stdin)
#define rall(x) x.rbegin(), x.rend()
#define all(x) x.begin(), x.end()
#define np string::npos
#define int long long
 
int n;
vector<int> v;
 
int minDiff(int i, int sum1, int sum2) {
    if(i == n) return abs(sum1 - sum2);
 
    return min(minDiff(i+1, sum1+v[i], sum2), minDiff(i+1, sum1, sum2+v[i]));
}
 
int32_t main() 
{_
    cin >> n;
 
    v.resize(n);
    for(int i=0; i<n; ++i) cin >> v[i];
 
    cout << minDiff(0, 0, 0);


#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
using ll = long long;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    
    vector<int> A(n+1);
    for (int i=0; i<n; ++i)
        cin >> A[i];
    
    vector<int> B(n+1);
    for (auto &b: B)
        b = -1;
    
    ll s = 0;
    for (auto a : A)
        s += a;
    ll t = s;
    
    while (B[n])
    {
        int i = 0;
        while (1)
        {
            if (B[i])
            {
                B[i]=0;
                s -= 2*A[i];
                break;
            } else {
                B[i] = -1;
                s += 2*A[i];
                ++i;
            }
        }
        t = min(abs(s),t);
    }
    printf("%ld",t);
 
