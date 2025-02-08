#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    string x;
    cin >> x;
    int ref = 1, n = 1;
    char a = x[0];
    int len = x.size();
    for ( int i = 1; i < len; i++)
    {
        if(a == x[i])
           n++;
        else
            n = 1;
        ref = max(n, ref);
        a = x[i];
    }
    cout << ref << '\n';
    return 0;
}