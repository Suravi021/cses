#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin.sync_with_stdio(false);
	cin >> n;
	while (n != 1)
	{
		cout << n << " ";

		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = n * 3 + 1;
		}
	}
    cout << n << "\n";
}