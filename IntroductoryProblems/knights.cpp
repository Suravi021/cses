    #include <iostream>

    using namespace std;

    int main()
    {
        cin.sync_with_stdio(false);

        unsigned int n;
        long long pos = 0;
        long long y = 0;
        cin >> n;
        n++;
        for (int k = 1; k < n; k++)
        {
            long long i = k * k;
            if( k < 3)
            {
                pos = i * (i - 1)/ 2;
            }
            else if (k == 3)
            { 
                pos += (i - 1) * ( i - 3) / 2;
                pos += (i - 1)/ 2;

            }
            else 
            {
                pos += 4 * (i - 3);
                pos += 8 * (i - 4);
                pos += (k - 4) * 4 * (i - 7);
                pos += long( max( y, (4 * k - 12) * (i - 5)));
                pos += long(max(y, ((k - 4) * (k - 4) * (i - 9))));
                pos /= 2;
            }

            cout << pos << "\n";
            pos = 0;
        }
        return 0;
    }