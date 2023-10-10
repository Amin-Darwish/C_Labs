#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    
    int n;
    scanf("%d", &n);
    int size = n*2 - 1;
    int start = 0 ;
    int end = size - 1 ;
    int a[size][size];

    while (n !=0 )
    {
        for(int i = start ;i<= end ; i++)
        {
            for(int j=start ;j<=end ;j++)
            {
                if (i == start || i == end ||
                    j == start || j == end )
                    a[i][j] = n; 
            
            }
        }
        
        ++start ;
        --end;
        --n;
    }    
        for (int i = 0 ; i< size ; i++)
        {
          for (int j = 0 ; j< size ; j++) 
          
            printf("%d ", a[i][j]);
            printf("\n");
          
        }
    
    return 0;
}




/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    
    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}


*/