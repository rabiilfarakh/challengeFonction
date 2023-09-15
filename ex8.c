#include<stdio.h>

int nbrParfait(int x){
    int i,s=0;
    for(i=1;i<=x/2;i++){
        if(x%i==0)
            s+=i;
    }
    if(x==s)
        return 1;
    return 0;
}

int main(){
    int x;

    printf("entrer un nbr: ");
    scanf("%d",&x);
    if(nbrParfait(x)==1)
        printf("%d est parfait",x);
    else
        printf("%d n est pas parfait",x);
}