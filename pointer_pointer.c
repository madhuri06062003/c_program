#include<stdio.h>
int main() {
    int x =0;
    int *ptr=&x;
    int **pptr =&ptr;
   
    printf("%d",**pptr);
}
