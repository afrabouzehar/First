#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a,b;
    printf("Entrez un entier : ");
    scanf("%d",&a);

    printf("Entrez un autre entier : ");
    scanf("%d",&b);
    int produit=a*b;

    printf("\n=== Le produit de %d et %d est : %d === ",a,b,produit);

    // Wait for user to press Enter
    printf("\n\nPress Enter to exit...");
    getchar();   // waits for a key press


    return 0;

}
