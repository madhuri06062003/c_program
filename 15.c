#include<stdio.h>
int main() {
    int n;
    printf("Enter number \n");
    scanf("%d",&n);

    int sum=0;
    for(int i=1,j=n;i<=n && j>=1;i++,j--) {
        sum = sum+1;
        printf("%d \n",j);
    }
    printf("sum is %d \n",sum);
    return 0;

    /*for(int i=0;i>=1;i--) {
        printf("%d \n",i);
    }*/

}