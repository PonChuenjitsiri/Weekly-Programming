#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i = 1;i <= a;i++){
        for(int k = 0;k <= a - i;k++){
            printf(" ");
        }
        for(int j = 0 ; j < (i * 2) - 1 ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}