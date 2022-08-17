#include<stdio.h>
int main()
{
    float a, b, c;
    int d;
    printf("Enter Weight : ");
    scanf("%f", &b);
    printf("Enter Height : ");
    scanf("%f", &c);
    c = c / 100;
    a = b / (c * c);
    if (a < 18.5 && a > 0)
    {
        d = 1;
    }
    else if (a >= 18.5 && a < 25)
    {
        d = 2;
    }
    else if (a >= 25 && a < 30)
    {
        d = 3;
    }
    else if (a >= 30)
    {
        d = 4;
    }
    switch (d)
    {
    case 1:
        printf("UNDERWEIGHT");
        break;
    case 2:
        printf("NORMAL");
        break;
    case 3:
        printf("ABOVE STANDARD");
        break;
    case 4:
        printf("TOO FAT");
        break;
    }
    return 0;
}