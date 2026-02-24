#include <stdio.h>

int main() {
  int time ;

  scanf("%d", &time);
  
  if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  
  return 0;
}