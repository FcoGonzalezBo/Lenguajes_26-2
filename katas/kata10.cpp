#include <iostream>
#include <vector>

using namespace std;

std::vector<std::vector<int>> cross_product(const std::vector<int>& a, const std::vector<int>& b){
    size_t s = a.size()*b.size();
    std::vector<std::vector<int>> res(s, std::vector<int>(2));
    int c = 0;
    for (size_t i = 0; i < a.size(); i++) {
        for (size_t j = 0; j < b.size(); j++){
            res[c][0] = a[i];
            res[c][1] = b[j];
            c++;
        }
    }
    return res;
}

void print_pairs(const std::vector<std::vector<int>>& v) {
    std::cout << "(";
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << (i > 0 ? " (" : "(") << v[i][0] << " " << v[i][1] << ")";
    }
    std::cout << ")\n";
}

int main()
{
    print_pairs(cross_product({1, 2}, {10, 20}));
    return 0;
}
