#include<stdio.h>
int main()
{
    int values[4],a=0;
    for(int i = 0 ; i < 4 ;i++){
        scanf("%d",&values[i]);
        if(values[i]%2==0){
        a++;
    }
    }
    printf("ANS = %d",a);
    return 0;
}