#include <bits/stdc++.h>

using namespace std;

void print(std::vector<long long> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

int main()
{
    long long n;
    cin >> n;
    vector<long long> all;
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> n;
        all.push_back(n);
        sum += n;
    }
    sort(all.begin(), all.end());
    print(all);
    return 0;

}