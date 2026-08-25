#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct Punto {
    double x;
    double y;
    };

double distancia_al_origen(const Punto& p){
    double a = 0 - p.x;
    double b = 0 - p.y;
    return sqrt((a*a)+(b*b));
};

Punto mas_lejano(const std::vector<Punto>& v){
    Punto r = v[0];
    if (v.size() < 2){
        return r;
        }
    for (size_t i = 1; i < v.size(); i++){
            if (distancia_al_origen(r) < distancia_al_origen(v[i])){
                r = v[i];
            }
    }
    return r;
};


void print_punto (const Punto& p){
    cout << "(" << p.x << ", " << p.y << ")" << endl;
};


int main()
{
    Punto p1 = {1, 1};
    Punto p2 = {3, 4};
    Punto p3 = {0, 2};
    Punto p5 = {5, 0};
    Punto p6 = {-6, 0};

    std::vector<Punto> lista = {p1, p2, p3};
    //std::vector<Punto> lista = {p5};
    //std::vector<Punto> lista = {p6, p2};

    cout << "Punto mas lejano: ";
    print_punto(mas_lejano(lista));
    return 0;
}
