/*#include<stdio.h>
int main()
{
    int k, num=30;
    k = (num>50 ? (num <=10 ? 100 : 200): 500);
    printf("%d\n",k);
    return 0;
}*/
/*#include<stdio.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    if(str1== str2)
        printf("Equal\n");
    else
        printf("Unequal\n");
    return 0;
}*/
#include<stdio.h>

int main()
{
FILE *f=fopen("test.txt","w");
fprintf(f,"%c","HELLO"); // This will print the output in test.txt.
}