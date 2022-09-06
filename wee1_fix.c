#include <stdio.h>
#include<string.h>
int main()
{
    float BMI[3] = { 18.5,25,30 };
    char str[4][50] = {"UNDERWEIGHT","NORMAL","ABOVE STANDARD","TOO FAT"};
    float a, b, c;
    printf("Enter Weight : ");
    scanf("%f", &b);
    printf("Enter Height : ");
    scanf("%f", &c);
    c = c / 100;
    a = b / (c * c);
    for(int i = 0;i<=3;i++){
        if(a < BMI[i]){
            printf("%s",str[i]);
            break;
        }
    }
        if(a > BMI[2]){
            printf("too fat");
        }
    
    return 0;
}