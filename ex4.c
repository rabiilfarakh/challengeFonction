#include<stdio.h>

int max_2(int a,int b){
    return (a>b) ?  a : b;
}

int max_4(int a,int b,int c,int d){
    return max_2(max_2(a,b),max_2(c,d));
}

int main(){
    int a,b,c,d;

    printf("entrer les valeurs: \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    printf("le max est %d",max_4(a,b,c,d));
}