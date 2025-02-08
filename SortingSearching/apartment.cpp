#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m,n,k, cur = 0, ans = 0;
    cin >> m >> n >> k;
    vector<long long> wants(m);
    vector<long long> app(n);

    for(int i=0; i < m; i ++)
    {
        cin >> wants[i];
    }

    for(int i=0; i < n; i ++)
    {
        cin >> app[i];
    }

    sort(wants.begin(), wants.end());
    sort(app.begin(), app.end())

    
    for(int i = 0; i < m; i++)
    {

    }
    /*
    for x in wants:
        while(cur<)
    
    */
}