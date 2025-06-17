#include<stdio.h>
int main() {
    int a=3;
    int b=4;
    int c=7;
    printf("%d",a>b && b<c);
    printf("%d",c>a || c<b);
    printf("%d",!(a<c));
    return 0;
}