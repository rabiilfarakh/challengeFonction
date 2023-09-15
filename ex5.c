#include <stdio.h>


void Permuter(float a, float b) {
    float temp = a;
    a = b;
    b = temp;
    printf("a=%f et b=%f",a,b);
}

int main(){
    float a,b;

    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    Permuter(a,b);


}
