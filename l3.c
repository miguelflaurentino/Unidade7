#include <stdio.h>

struct Ponto {int x, y; };

void move(struct Ponto *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

int main()
{
    struct Ponto ponto = {1, 1};
    
    move(&ponto, 4, 2);
    
    printf("(%d, %d)\n", ponto.x, ponto.y);
    
    return 0;
}
