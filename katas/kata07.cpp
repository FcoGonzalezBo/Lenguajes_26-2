#include <iostream>
#include <vector>

using namespace std;

template <typename T>

std::vector<T> copies(int n, T x){
    std::vector<T> lista;
    for (int i = n; i > 0; i--){
        lista.push_back(x);
    }
    return lista;
}

template <typename T>

void print_list(const std::vector<T>& v) {
    std::cout << "(";
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << (i > 0 ? " " : "") << v[i];
    }
    std::cout << ")\n";
}

int main()
{
    print_list(copies(5, 6.258));
    return 0;
}
