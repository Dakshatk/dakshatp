#include<stdio.h>
void main(){
    int a;
    //char opr;
    printf("Enter the month no. = ");
    scanf("%d",&a);

    // printf("Enter the operator = ");
    // scanf("%c\n",&opr);

    // printf("Enter the number = ");
    // scanf("%d\n",&b);

        switch(a){
            case 1:
            printf("January",a);
            break;

            case 2:
            printf("February",a);
            break;

            case 3:
            printf("March",a);
            break;

            case 4:
            printf("April",a);
            break;

            case 5:
            printf("May",a);
            break;

            case 6:
            printf("June",a);
            break;

            case 7:
            printf("July",a);
            break;

            case 8:
            printf("August",a);
            break;

            case 9:
            printf("September",a);
            break;

            case 10:
            printf("October",a);
            break;

            case 11:
            printf("November",a);
            break;

            case 12:
            printf("December",a);
            break;

            default:
            printf("Not a valid number");
        }
}