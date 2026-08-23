#include <iostream>
#include <vector>

using namespace std;

int mayor(const std::vector<int>& v){
    int r = v[0];
    for (int i = 0; i < v.size(); i++){
            if (r-v[i] < 0){
                r = v[i];
            }
    }
    return r;
}

int maximo(const std::vector<int>& v){
    if (v.size() < 2){
        return v[0];
        }
    return mayor(v);
}

int main()
{
    //std::vector<int> lista = {3, 9, 2, 7};
    //std::vector<int> lista = {4};
    std::vector<int> lista = {-8, -3, -10};

    cout << maximo(lista) << endl;
    return 0;
}
