#include<stdio.h>
#include<stdbool.h>

bool estPremier(int x){
    int i;

    if (x <= 1) {
        return false; 
    }
    for(i=2;i<=x/2;i++){
        if(x%i==0)
            return false;
    }
    return true;

}

int main(){
    int a;

    printf("entrer un entier: ");
    scanf("%d",&a);

    if(estPremier(a))
        printf("%d est premier",a);
    else
        printf("%d n est pas premier",a);

}