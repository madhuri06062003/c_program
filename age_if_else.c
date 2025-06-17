#include<stdio.h>
int main() {
    int age;
    printf("Enter the age :");
    scanf("%d",&age);

    if(age>18) {
        printf("Eligible for vote \n");
        printf("Adult \n");
    } else {
        printf("Not eligible for vote \n");
        printf("Teenager \n");
    }
    return 0;
}