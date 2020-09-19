//Author: Eric Zhang ecz5032@psu.edu 


#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n){
  if (n == 0){
    return 0;
  }
  else {
    int z = n % 10;
    return z + digit_sum(n/10);
  }
}


int main(void) {
  char *num = readline("Enter an int: ");
  int init_num = atof(num);
  int fin_num = digit_sum(init_num);
  printf("sum of digits of %d. is %d\n", init_num, fin_num);
}