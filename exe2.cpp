#include <stdio.h>

int main() {
    int x1;
    int x2;
    int x3;
    float media;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &x1, &x2, &x3);
    
    media = (x1 + x2 + x3)/2;
    
    printf("\n\nA media dos numeros e: %d", media);
    
}
