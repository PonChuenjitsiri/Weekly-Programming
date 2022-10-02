#include<stdio.h>
int main() {
    int input;
    scanf("%d",&input);
    int center = input;
    for (int i = 1;i <= input;i++) {
        for (int j = 1; j <= (input * 2) - 1; j++)
        {
            if (i == 1 && j == input) {
                printf("*");
            }
            else if (j > center - i && j < center + i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}