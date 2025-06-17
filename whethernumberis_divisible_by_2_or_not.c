#include<stdio.h>
int main() {
    //if divisible by 2 then print 1 otherwise 0
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("%d",a%2==0); //ex1
    /*if(a%2==0) //ex2
    {
        printf("Divisible");
    } else {
        printf("Not");
    }*/
    return 0;
}