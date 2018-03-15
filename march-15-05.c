#include<stdio.h>
int main()
{
    int i, x;

    printf("Input an integer : ");
    scanf("%d",&x);

    printf("\n List of square of each one of the even values from 1 to a %d : ",x);

    for(i = 2; i <= x; i++)
    {
        if((i%2) == 0)
        {
            printf("%d^2= %d\n",i,i*i);
        }
    }

    return 0;
}
