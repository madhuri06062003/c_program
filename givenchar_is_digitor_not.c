#include<stdio.h>
int main() {
    char a;
    int b;
    printf("Enter a");
    scanf("%c",&a);
    b = (a>=0) && (a<=9);
    printf("%d",b);
}