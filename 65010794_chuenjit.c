#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Enter Weight : ");
    scanf("%f", &b);
    printf("Enter Height : ");
    scanf("%f", &c);
    c = c / 100;
    a = b / (c * c);
    if (a < 18.5 && a > 0)
    {
        printf("UNDERWEIGHT");
    }
    else if (a >= 18.5 && a < 25)
    {
        printf("NORMAL");
    }
    else if (a >= 25 && a < 30)
    {
       printf("ABOVE STANDARD");
    }
    else if (a >= 30)
    {
        printf("TOO FAT");
    }
    return 0;
}