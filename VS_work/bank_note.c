#include <stdio.h>
#include <math.h>
int main(){
int hundreds=0,fifties=0,twenties=0,tens=0,fives=0,ones=0;
int money = 327;
if (money >100){
    hundreds = money/100;
    money = money%100;
    
}   
if(money>=50){
fifties= money/50;
money = money %50;
} 
if (money>=20){
twenties=money/20;
money= money %20;
} 
if (money>=10){
tens=money/10;
money= money %10;
} 
if (money>=5){
fives= money/5;
money= money %5;
} 
if (money>=1){
ones=money/1;
} 
printf("hunderds ( %d )\n", hundreds );
printf("fifties (%d)\n" ,fifties );
printf("twenties (%d) \n" ,twenties);
printf("tens (%d)\n " ,tens );
printf("fives(%d)\n",fives );
printf("ones (%d)\n",ones );
}
