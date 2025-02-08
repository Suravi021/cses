#include <iostream>
#include <set>

int main(){
    std::set<int> num;
    int n;
    std::cin >> n;
    for(int i=0; i<n; i++)
    {
        int m;
        std::cin >> m;
        num.add(m);
    }
    std::cout << num.size() << std::endl;
    return 0;

}