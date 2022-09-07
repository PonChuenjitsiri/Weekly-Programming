#include<stdio.h>
int main()
{
    int input[3],a,ANS;
    printf("Enter three Number : ");
    for(int i = 0 ; i < 3 ; i++){
        scanf("%d",&input[i]);
    }
    for(int i = 0 ; i < 2 ; i++){
        for(int j = i+1 ; j < 3 ; j++){
            if(input[i]>input[j]){
             a = input[i]; 
             input[i]=input[j]; 
             input[j]=a;
            }
            
        }
    }
        ANS = input[0] + input[1];
        printf("%d",ANS);
}
