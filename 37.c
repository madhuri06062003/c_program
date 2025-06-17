//print the value of i from pointer to pointer
#include<stdio.h>
int main() {
    int i=10;
    int *ptr=&i;
    int **pptr=&ptr;

    printf("%d\n",i);
    printf("%d\n",**pptr);
    printf("%d\n",*ptr);

    printf("%p\n",&i);
    printf("%p\n",&ptr);

    return 0;
}