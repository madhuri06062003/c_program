#include <stdio.h>
void dowork(int a,int b,int *sum,int *product,int *average);
void _dowork(int a,int b,int sum,int product,int average);

int main() {
    int a=2,b=3;
    int sum,product,average;
    dowork(a,b,&sum,&product,&average);
    _dowork(a,b,sum,product,average);
    printf("sum = %d,product = %d,average = %d\n",sum,product,average);
    return 0;
}
//call by reference
void dowork(int a,int b,int *sum,int *product,int *average) {
    *sum = a+b;
    *product = a*b;
    *average = (a+b)/2;
}
//call by value
void _dowork(int a,int b,int sum,int product,int average) {
    sum =a+b;
    product =a*b;
    average =(a+b)/2;
}