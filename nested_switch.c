#include<stdio.h>
int main() {
    int day,month;
    printf("Enter no of days \n");
    scanf("%d",&day);

    printf("Enter no of month \n");
    scanf("%d",&month);

    switch(day){
        case 0 : switch(month) {
            case 1: printf("jan \n");
            break;
            case 2: printf("feb \n");
            break;
            case 3: printf("march \n");
            break;
            case 4: printf("april \n");
            break;
            case 5: printf("may \n");
            break;
            case 6: printf("jun \n");
            break;
            case 7: printf("july \n");
            break;
            case 8: printf("aug \n");
            break;
            case 9: printf("sep \n");
            break;
            case 10: printf("oct \n");
            break;
            case 11: printf("nov \n");
            break;
            case 12: printf("dec \n");
            default : printf("Invalid! \n");
        }
        break;
        default : printf("Not valid \n");
    }
    return 0;
}