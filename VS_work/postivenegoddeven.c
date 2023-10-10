#include<stdio.h>
int main()
{
    int num=0;
    printf("Enter the numers length:");
    scanf("%d",&num);
    int x =0;
    int sqr =0;
    for (int i = 0; i < num; i++)
    {   
        printf("Enter %d even number ",i+1);
        scanf("%d",&x);
        if(x%2==0)
        {
          sqr=x*x;
          printf("the squre even number = %d\n",sqr);  
        }
        
    }
   
}