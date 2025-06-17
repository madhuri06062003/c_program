#include<stdio.h>
/*int main() {
    int x=2;
    int i;

    printf("Enter no if time to print \n");
    scanf("%d",&i);

    if(x==1) {
        printf("x is equal to 1");
    } else {
        printf("x is nort equal to 1");
    }
    return 0;
*/
   /*  for(i=1;i<=3;i++) {
        printf("Display output \n");
    }

}*/

int main() {
    for(int i=1;i<=5;i++) {
        if(i==3) {
            break;
        }
        printf("Loop exits");
    }
    return 0;
}