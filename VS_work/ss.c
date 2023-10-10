#include <stdio.h>

int main() 
{	
		int length;
		printf("Enter the number of digits : " );
	    scanf("%d",&length);
		int arr[length];
		int Num = 0;
		

	 

	 for (int i = 0; i < length ; i++)
	 {
            printf("\nNumper %d = " , i+1 );
		    scanf("%d",&arr[i]);

		if (arr[i]%2 == 0 )
		{
			Num = arr[i] * arr[i];
			printf("Square = %d " ,Num );
		}
		
	 }
	
	return 0;
}