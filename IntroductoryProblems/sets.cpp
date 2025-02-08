#include <iostream>

using namespace std;

void fuck(int diff, int part, long long f, long long n)
{
    if(part == 0)
    {
        for(int j = 1; j <= f; j++)
        {
            cout << j + diff << ' ';
            cout << n + 1 - j + diff << ' ';

        }
    }
    else
    {
        for(int j = f + 1; j <= f * 2; j++)
        {
            cout << j + diff << ' ';
            cout << n + 1 - j + diff << ' ';
        }
    }
}

int main()
{
    cin.sync_with_stdio(false);
    long long n;
    cin >> n;
    int mod = n % 4;
    if( mod == 0)
    {
        long long f = n / 4;
        cout << "YES\n";
        cout << n / 2 << '\n';
        fuck(0,0,f,n);
        cout << '\n';
        cout << n / 2 << '\n';
        fuck(0,1,f,n);
        cout << '\n';
        
    }
    else if (mod == 1 || mod == 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        long long f = n / 4;
        cout << "YES" << endl;
        cout << n / 2 << endl;
        cout << 3 << " ";
        fuck(3,0,f,n-3);
        cout << "\n";
        cout << n / 2 + 1 << endl;
        cout << 1 <<" "<< 2 << " ";
        fuck(3,1,f,n-3);
        cout << "\n";

    }
    
    return 0;
}