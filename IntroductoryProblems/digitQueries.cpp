#include <bits/stdc++.h>

using namespace std;

long long my_pow(long i)
    {
        long long t = 1;
        for(long k = 0; k < i; k++)
        {
            t *= 10;
        }
        return t;

    }

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int n;
    cin >> n;
    long last = 0;
    long i = 1;
    vector<long long> things{10};

    for(int j = 0; j < n; j++)
    {
        long long k;
        cin >> k;
        // long long m = 10;
        long long prev;
        prev = 0;
        while(k > things[last])
        {
            prev = 1;
            things.push_back( things[last] + (my_pow(i+1) - my_pow(i)) * ++i );
            last ++;
        }

        if(prev == 1)
        {
            prev = things[last];
            i = last + 1;
        }
        else
        {
            for( int j = 0; j < last; j ++)
            {
                cout << "print no ";
                cout << things[j] << endl;
                if (things[j] > k)
                    {
                        i = j+1;
                        prev = things[j-1];

                    }
            }
        }

        if(prev == 10)
        {
            cout << k << endl;
            continue;
        }

        long long d = (k - prev) / i;
        d  += my_pow(i-1);


        long mod = k % i;
        cout << i << endl;
        string c = to_string(d);
        cout << c[mod]<< endl;
    }
    return 0;

}