#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,ANS;
    printf("Enter three number : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1 < num2 && num1 < num3 && num2 < num3) num4 = 1;
    if(num3 < num1 && num3 < num2 && num2 < num1) num4 = 2;
    if(num1 < num2 && num1 < num3 && num3 < num2) num4 = 3;
    switch(num4){
        case 1: 
            ANS = num1 + num2;
            printf("ANS = %d",ANS);
            break;
        case 2: 
            ANS = num2 + num3;
            printf("ANS = %d",ANS);
            break;
        case 3: 
            ANS = num1 + num3;
            printf("ANS = %d",ANS);
            break;
    }
    return 0;
}