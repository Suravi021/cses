#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll ans;

ll isValid(vector<string> b, ll r, ll c, ll n)
{ 
    ll i, j;
    for(i=0; i < c; i++)
        if(b[r][i]=='Q')
            return 0;
    for(i=r,j=c; i>-1 && j>-1; i--,j--)
    {
        if(b[i][j]=='Q')
            return 0;
    }
    for(i=r,j=c; i<n && j>-1 ;i++,j--)
    {
        if(b[i][j]=='Q')
            return 0;
    }
    return 1;

}

ll q(vector<string> b, ll n, ll c)
{
    if (c==n)
        return 1;
    for(ll i=0; i<n; i++)
    {
        if(b[i][c] == '*') continue;
        if(isValid(b,i,c,n))
        {
            b[i][c] = 'Q';
            if (q(b,n,c+1)) {
                ans += 1;
            }
            b[i][c] = '.';
        }
    }
    return 0;
}


int main(){
    vector<string> board;
    string s;
    cin >> s;
    board.push_back(s);
    ll n = s.length();
    for(ll i = 1; i<n; i++)
    {
        cin >> s;
        board.push_back(s);
    }

    q(board,n, 0);

    cout << ans << endl;
    
    return 0;
}