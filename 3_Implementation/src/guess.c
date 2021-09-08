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
int guess(int guesses){
    int num=5, flag, count=0;
    if(num==guesses) {
         flag=0;
         printf("Congratulations! You guessed the correct number %d\n", num);
      } else if(guesses<num) {
         flag=1;
         printf("Your guess is lower than the number\n");
         count++;
      } else {
         flag=1;
         printf("Your guess is greater than the number\n");
         count++;
      }
    return (count);
}

