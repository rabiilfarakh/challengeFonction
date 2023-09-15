#include<stdio.h>

int pgcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return pgcd(b, a % b); 
    }
}

int main() {
    int a, b;

    printf("entrez deux nombres entiers non nuls (a > b) : ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0 || a <= b) {
        printf("entrer des nombres valides (a > b)\n");
    } else {
        int resultat = pgcd(a, b);
        printf("Le pgcd de %d et %d est : %d\n", a, b, resultat);
    }

}
