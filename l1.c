#include <math.h>

struct ponto {
    int x, y;
};

float diferenca(struct ponto a, struct ponto b){
    int x = b.x - a.x;
    int y = b.y - a.y;
    return sqrt(x * x + y * y);
}

int main()
{
    struct ponto a = {0, 0};
    struct ponto b = {3, 4};
    
    float distancia = diferenca(a, b);
    
    printf("Distância entre a e b: %.2f\n", distancia);

    return 0;
}
