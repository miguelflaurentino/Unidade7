#include <stdio.h>

int main()
{
    union bytes { int i; char b[4]; } v;
    v.i = 0x01020304;
    
    for(int i = 0; i < 4; i++) {
        printf("%02X ", v.b[i]);
    }
    
    printf("\n");

    return 0;
}

// Imprime primeiro "04". Mostra como o litte-endian guarda primeiro o byte menos significativo.
