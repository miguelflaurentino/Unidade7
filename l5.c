#include <stdio.h> 
#include <stddef.h>

struct Ruim {
    char a;
    int b;
    char c;
};

struct Bom {
    int b;
    char a;
    char c;
};

int main()
{
    struct Ruim ruim; // = {"B", 8, "C"};
    ruim.a = 'B';
    ruim.b = 8;
    ruim.c = 'C';
    
    struct Bom bom;
    bom.b = 8;
    bom.a = 'B';
    bom.c = 'C';
    
    printf("Sizeof: %zu; Offset: %zu\n", sizeof(ruim.a), offsetof(struct Ruim, a));
    printf("Sizeof: %zu; Offset: %zu\n", sizeof(ruim.b), offsetof(struct Ruim, b));
    printf("Sizeof: %zu; Offset: %zu\n", sizeof(ruim.c), offsetof(struct Ruim, c));
    
    printf("\n");
    
    printf("Sizeof: %zu; Offset: %zu\n", sizeof(bom.a), offsetof(struct Bom, b));
    printf("Sizeof: %zu; Offset: %zu\n", sizeof(bom.b), offsetof(struct Bom, a));
    printf("Sizeof: %zu; Offset: %zu\n", sizeof(bom.c), offsetof(struct Bom, c));

    return 0;
}
