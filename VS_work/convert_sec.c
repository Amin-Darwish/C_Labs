#include<stdio.h>
#include<math.h>
int main(){
int time =25300;
int houres = time/3600;
time =time%3600;
int minutes= time/60;
time = time % 60;
int seconds = time ;
printf("H.M.S - %d:%d:%d ",houres,minutes,seconds);
}