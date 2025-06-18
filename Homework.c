//c program to find max number between 2 numbers using pointers
#include<stdio.h>
int maxnumber(int *a,int *b) {
    if(*a>*b) {
        return *a;
    }else{
        return *b;
    }
}

int main() {
    int a1=3,b1=2;
    int max;
    printf("Enter 2 numbers :");
    scanf("%d %d",&a1,&b1);
    max=maxnumber(&a1,&b1);
    printf("max=%d\n",max);
    return 0;
}
