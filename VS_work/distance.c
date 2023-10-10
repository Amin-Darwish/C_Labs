#include <stdio.h>
#include <math.h>
int main(){
int x1=25,x2=35,y1=15,y2=10;
int z1=x2-x1;
int z2=y2-y1;
float distance = sqrt( pow(z1,2) + pow(z2 ,2));
printf("The distance= %f",distance);

}
