#include <iostream>

using namespace std;

int main()
{
    long long n, input, sum = 0;
    cin.sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i < n; i++)
    {
        cin >> input;
        sum += input;
    }

    long long total = n * (n+1)/2;
    cout << (total - sum) << endl;
    return 0;
}
