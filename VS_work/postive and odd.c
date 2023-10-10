#include <stdio.h>

int main(){
	  int pos=0;int neg=0;
    int arr[5];
    int sumodd=0;
    printf("Enter 5 intger numbers:\n");
    for(int i=0;i<5;i++)
    { printf("int%d= ",i+1);
      scanf("%d", &arr[i]);
       if (arr[i]%2!=0)
       {
        sumodd+=arr[i];
       }
       if(arr[i]>0)
        {
          pos++;
        }
        else if (arr[i]<0) 
        {
          neg++;
        }
    }   
    printf("Number of positive numbers= %d\n",pos);
    printf("Number of negative numbers= %d\n",neg);
    printf("Sum of all odd values:%d",sumodd);

}