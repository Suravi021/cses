#include <iostream>

using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    int n;
    long long element, ref = 0, count = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> element;
        long long dif = 0;
        if( element < ref)
        {
            dif = ref - element;
            count = count + dif;
        }
        ref = element + dif;
    }
    cout << count;
    return 0;
}