#include <stdio.h>

int main(void){
  int item;
  double time, x;
  int limit;

  printf("Enter the number of terms you want:");
  scanf("%d", &limit);

  for(time = 0, x = 1, item = 1; item <= limit; item++, x *= 2.0)
  {
    time += 1.0 / x;
    printf("time = %f when terms = %d.\n", time, item);
  }

  return 0;
}

/*
  S = 1 + 1/2 + 1/4 + 1/8 + ...
  S/2 = 1/2 + 1/4 + 1/8 + 1/16 + ...
  S - S/2 = 1 + 1/2 - 1/2 + 1/4 - 1/4 + 1/8 - 1/8 + ...

  S/2 = 1
  S = 2
*/
