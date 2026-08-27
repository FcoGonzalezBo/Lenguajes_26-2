#include <iostream>
#include <vector>

using namespace std;

std::vector<std::vector<int>> flip_pairs(const std::vector<std::vector<int>>& v){
    std::vector<std::vector<int>> res;
    for (size_t i = 0; i < v.size(); i++){
        res.push_back({v[i][1], v[i][0]});
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
    std::vector<std::vector<int>> x = {{1, 2}, {3, 4}, {5, 6}};
    print_pairs(flip_pairs(x));
    print_pairs(x);
    return 0;
}
