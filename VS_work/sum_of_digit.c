#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int a = n / 10000;     // 1
    int mod = n % 10000;     // 0564
    int sum = a;
    a = mod /1000 ;
    sum += a;
    mod %= 1000; 
    a = mod /100 ;
    sum += a;
    mod %= 100; 
    a = mod /10 ;
    sum += a;
    mod %= 10; 
     a = mod /1 ;
    sum += a;
    printf("%d",sum);
    return 0;
}