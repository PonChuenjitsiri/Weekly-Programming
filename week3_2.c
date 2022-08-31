#include<stdio.h>
int main()
{
    int number,a = 0;
    scanf("%d",&number);
    printf("%d\n",number);
    while(a < number)
    {
        printf("*");
        a++;
    }
    return 0;
}