#include <iostream>

using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    long long n;
    int n5 = 0;
    cin >> n;
    while(n != 0)
    {
        n5 += n / 5;
        n /= 5;
    }
    cout << n5 << '\n';
}