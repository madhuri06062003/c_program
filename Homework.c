//c program to find max number between 2 numbers using pointers
/*#include<stdio.h>
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
}*/

//c program to print all letters in english using pointers
/*#include<stdio.h>
int main() {
    char ch;
    char *ptr;

    printf("upperletters :");
    for(ch='A';ch<='Z';ch++) {
        ptr=&ch;
        printf("%c",*ptr);
    }
    printf("\n");

    printf("Lowercase:\n");
    for(ch='a';ch<='z';ch++) {
        ptr=&ch;
        printf("%c",*ptr);
    }
    printf("\n");
    return 0;
}*/

//c program to print elements of array in reverse order
#include<stdio.h>
int main() {
    int arr[100],n,i;
    int *ptr;

    printf("Enter number of elements : ");
    scanf("%d\n",&n);

    printf("Elements %d:\n",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    ptr=&arr[n-1];

    printf("Reverse order :\n");
    for(i=n-1;i>=0;i--) {
        printf("%d",*ptr);
        ptr--;
    }
    printf("\n");
    return 0;
}