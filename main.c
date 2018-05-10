#include <stdio.h>
#define DIGITSIZE   10
int main ( ){ 
    int num, dig[DIGITSIZE],i,j;
    printf("Enter a 5 digit whole number: ");
    scanf("%d", &num); 
    i=0;
    while(num!=0)//for(i=0; i<5;i++)
    {
        if(i < DIGITSIZE)
        {
            dig[i]=num%10;
            num/=10;
            i++;
        }
        
    }
    
    for(j=0;j<i;j++)
    {
        printf("%d ", dig[j]);
    }
    return 0;
}
