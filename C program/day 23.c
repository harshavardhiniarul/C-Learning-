//Calculate the percentage of a user's score in relation to the maximum score in a game:


#include <stdio.h>

int main() {
  
  int maxScore = 500;

  int userScore = 423;

  float percentage = (float) userScore / maxScore * 100.0;

  printf("User's percentage is %.2f", percentage);

  return 0;
}