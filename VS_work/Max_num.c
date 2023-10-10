#include <stdio.h>
int main(){
 int a,b,c;
 printf("Num1:");
 scanf("%d" ,&a);
 printf("Num2:");
 scanf("%d" ,&b);
 printf("Num3:");
 scanf("%d" ,&c);

 if(a>b&&a>c){
  printf("Maximum value of three integer: %d",a);
 }
 else if(b>c){
  printf("Maximum value of three integer: %d",b);
 }
 else printf("Maximum value of three integer: %d",c);
}
