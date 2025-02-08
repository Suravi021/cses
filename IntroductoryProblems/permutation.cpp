#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long mid;
    cin >> n;
    if( n == 1)
    {
        cout << "1\n";
        return 0;
    }
    if( n < 4)
        {
            cout << "NO SOLUTION\n";
            return 0;
        }
    
    if( n % 2 == 0)
        {
            mid = n / 2 + 1;
            for( int i = 0; i < 2; i++)
            {
                for(int j = 1; j < mid; j++)
                {
                    if( i == 0) // even even
                        cout << 2 * j << ' ';
                    else // odd odd
                        cout << 2 * j  - 1 << ' ';
                }
            }
        }
    else 
        {
            mid = (n + 1) / 2;
            for (int i = 0; i < 2; i++)
            {
                for(int j = mid - i; j > 0; j--)
                {
                    if( i == 0) 
                        cout << j * 2 - 1 << ' ';
                    else
                        cout << j * 2 << ' ';
                }

            }
        }    
    cout << '\n';
    return 0;
}