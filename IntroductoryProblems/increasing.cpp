#include <iostream>

using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    long long n;
    cin >> n;
    long long temp = 0;
    long long element;
    int diff;
    int ref = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> element;
        diff = element - temp;
        if( diff < 0)
        {
            cout << abs(diff) << '\n';
            ref = max(abs(diff), ref);
        }
        else
            temp = element;
    } 
    cout << ref + 1 << '\n';
    return 0;
}