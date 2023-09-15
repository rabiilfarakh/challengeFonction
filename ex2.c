#include<stdio.h>

int somme(int a,int b){
    return a+b;
}

int main(){
    int a,b;

    printf("entrer la valeur de a: ");
    scanf("%d",&a);
    printf("entrer la valeur de b: ");
    scanf("%d",&b);

    printf("la somme est %d",somme(a,b));

}