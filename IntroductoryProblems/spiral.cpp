#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<long long> final;
    int n;
    long long x, y, ans;
    cin.sync_with_stdio(false);
    cin >> n;
    for( int i = 0; i < n; i++)
    {
        cin >> x;
        cin >> y;
        if( x > y)
        {
            if( x % 2 == 0)
                ans = x * x - y + 1;
            else 
                ans = (x - 1) * (x -1) + y;
        }

        else if( y > x)
        {
            if( y % 2 == 1)
                ans = y * y - x + 1;
            else
                ans = (y-1) * ( y - 1) + x;
        }

        
        else
            ans = x * x - x + 1;

        final.push(ans);        
    }
    while(!final.empty())
    {
	    cout << final.front() << '\n';
		final.pop();
    }
    return 0;
}