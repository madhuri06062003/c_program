#include<stdio.h>
int main() {
    int marks;
    printf("Enter the marks: \n");
    scanf("%d",&marks);

   /* if(marks > 30 && marks <=100) {
        printf("Pass \n");
    } else if (marks <=30 && marks >=0) {
        printf("Fail \n");
    } else {
        printf("Wrong \n");
    }
    return 0; */


    marks <= 30?printf("Fail \n"):printf("pass \n");

}
