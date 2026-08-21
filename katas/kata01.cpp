#include <iostream>
#include <vector>
using namespace std;

std::vector<int> cuenta_atras(int n){
    std::vector<int>res;
    for (int i = n ; i > 0; i--){
        res.push_back(i);
    }
    return res;
};   // cuenta_atras(5) => (5 4 3 2 1)

void imprimir(const std::vector<int>& v) {
    std::cout << "(";
        for (size_t i = 0; i < v.size(); i++) {
            if (i > 0) std::cout << " ";
    std::cout << v[i];
        }
    std::cout << ")\n";
}

int main()
{
    imprimir(cuenta_atras(5));
    return 0;
}
