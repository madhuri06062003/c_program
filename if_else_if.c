#include <stdio.h>
int main() {
    int marks;
    printf("Enter student marks : ");
    scanf("%d",&marks);

    if(marks>=90) {
        printf("Candidate passed in 1st class \n");
    } else if (marks >= 55 && marks <90) {
        printf("Candidate passed in 2nd class \n");
    } else {
        printf("Candidate failed \n");
    }
    return 0;
}