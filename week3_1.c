#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    printf("%d\n",number);
    for(int a = 0;a < number;a++)
    {
        printf("*");
    }
    return 0;
}