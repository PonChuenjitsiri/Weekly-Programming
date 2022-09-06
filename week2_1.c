#include<stdio.h>
int main()
{
    int num1, num2, num3, num4, a = 0;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if (num1 % 2 == 0) {
        a = a + 1;
    }
    if (num2 % 2 == 0) {
        a = a + 1;
    }
    if (num3 % 2 == 0) {
        a = a + 1;
    }
    if (num4 % 2 == 0) {
        a = a + 1;
    }
    printf("ANS = %d", a);
    return 0;
}