#include <iostream>
#include <vector>

using namespace std;

struct Contador {
     std::vector<std::string> ct ;
};

Contador contador_nuevo(){
    Contador n = {};
    return n;
};

Contador contador_inc(const Contador& c){
    Contador n = c;
    n.ct.push_back("c");
    return n;
};

int contador_valor(const Contador& c){
    return c.ct.size();
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
