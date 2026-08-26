#include <iostream>

using namespace std;

struct Contador {
    int val;
};

Contador contador_nuevo(){
    Contador n = {0};
    return n;
};

Contador contador_inc(const Contador& c){
    Contador x = {c.val + 1};
    return x;
};

int contador_valor(const Contador& c){
    return c.val;
};

Contador contar_hasta(int n){
    if (n == 0){
        return contador_nuevo();
    }else {
        return contador_inc(contar_hasta(n-1));
    }
};


int main()
{
    cout << contador_valor(contar_hasta(5)) << endl;
    return 0;
}
