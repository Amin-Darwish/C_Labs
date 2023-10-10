#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter the number :");
    scanf("%d",&x);
    for(int i=0;i<=100;i++)
    {
        if (i%x==3)
        {
            printf("%d\n",i);
        }
    }

}