#include<stdio.h>
int main()
{   int highest_value=0;
    int count=0;
    int pos=0;
    printf("Enter integer number:");
    scanf("%d",&count);
    int arr[count];
    arr[0]=0;
    for (int i=1; i<=count;i++)
 {
    printf("enter num %d\n",i);
    scanf("%d",&arr[i]);

    if (arr[i]>arr[i-1])
    {
        highest_value=arr[i];
        pos=i;

    }
 }
    printf(" highest value = %d\n",highest_value);
    printf(" position= %d",pos);
}