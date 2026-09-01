#include <iostream>
#include <vector>

using namespace std;

std::vector<int> replace_at(const std::vector<int>& v, int n, int x){
    std::vector<int> res = v;
    res[n] = x;
    return res;
}

void print_list(const std::vector<int>& v) {
    std::cout << "(";
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << (i > 0 ? " " : "") << v[i];
    }
    std::cout << ")\n";
}

int main()
{
    print_list(replace_at({10, 20, 30, 40}, 2, 99));
    return 0;
}
