// simple non sensical program
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(int argc, char *argv[])
{
  int iSecret, iGuess;

  srand (time(NULL));
  iSecret = rand() % 10;
  if (iSecret > 5) {
    // return error code
    printf("error!\n");
    return 1;
  }
  printf("success!\n");
  return 0;
}
