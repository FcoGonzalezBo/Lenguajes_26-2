#include <iostream>
#include <cstdint>

using namespace std;

uint64_t factorial_rec(int n){
    if (n==0){
        return 1;
    }else{
        return n * factorial_rec(n-1);
    }
}
// factorial_rec(5) => 120


uint64_t factorial_ciclo(int n){
    uint64_t r = 1;
    for (uint64_t i = 1; i<=n; i++){
        r = r*i;
    }
    return r;
}
// factorial_ciclo(5) => 120

int main()
{
    int n = 5;

    cout << "factorial_rec(" << n << ") => " << factorial_rec(n) << endl;

    cout << "factorial_ciclo(" << n << ") => " << factorial_ciclo(n) << endl;

    return 0;
}
