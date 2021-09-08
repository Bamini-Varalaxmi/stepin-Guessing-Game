/**
 * @file main.c
 * @author varalaxmi
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "game.h"
#include<stdio.h>
int main() {
   int num=5, flag=1, guesses, count=0, random1, random2;
   printf("guess the number randomly within 1 to 10 range\n");
   do {
      printf("enter number\n");
      scanf("%d", &guesses);
      count++;
      if(guesses>10 || guesses <1){
         printf("please select the number within the range\n");
         continue;
      }
      guess(guesses);
      if(num==guesses){
         flag=0;
      printf("guessed properly\n ");
      }
      else{
      random2= game();
      }
   } while(flag);
   printf("Total number of trails you attempted for guessing is: %d\n",count);
}
