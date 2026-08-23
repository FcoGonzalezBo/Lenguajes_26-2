#include <iostream>
#include <cmath>

using namespace std;

struct Punto {
    int x;
    int y;
    };

double distancia(const Punto& p, const Punto& q){
    int a = p.x - q.x;
    int b = p.y - q.y;
    return sqrt((a*a)+(b*b));
};

int main()
{
    Punto p1;
    p1.x = 0;
    p1.y = 0;

    Punto p2;
    p2.x = 1;
    p2.y = 1;

    cout << distancia(p1, p2) << endl;
    return 0;
}
