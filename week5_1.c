#include<stdio.h>
int main()
{
    int num1, num2, num3, result1, result2, result3;
    scanf("%d %d %d", &num1, &num2, &num3);
    result1 = num1 + num2;
    result2 = num1 + num3;
    result3 = num2 + num3;
        if (result1 > result2 && result1 > result3) {
            printf("%d", result1);
        }
        if (result2 > result1 && result2 > result3) {
            printf("%d", result2);
        }
        if (result3 > result2 && result3 > result1) {
            printf("%d", result3);
        }
    return 0;
}