#include<stdio.h>
int main() {
    float side,a,b;
    printf("Enter perimeter of rectangle");
    scanf("%f",&side);
    printf("Enter perimeter :\n");
    scanf("%f",&a);
    printf("Enter:\n");
    scanf("%f",&b);
    side=2*a+2*b;
    printf("perimeter:%f\n",side);
    return 0;

}