#include <iostream>
#include <vector>

using namespace std;

std::vector<int> merge_sorted(const std::vector<int>& a, const std::vector<int>& b){
    std::vector<int> s;
    size_t i = 0;
    size_t j = 0;
    while ((i<a.size()) || (j<b.size())){
        if (a[i]<=b[j]){
            s.push_back(a[i]);
            i++;
        }else {
            s.push_back(b[j]);
            j++;
        }
    }
    return s;
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
    print_list(merge_sorted({1, 4}, {1, 2, 8}));
    return 0;
}
