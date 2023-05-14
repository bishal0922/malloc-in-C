#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  printf("Test 1: \n");
  clock_t start_t, end_t;
  double total_t;

  start_t = clock();
  char *ptr = (char *)malloc(1024);
  free(ptr);

  char *ptr2 = (char *)malloc(200000);
  char *ptr3 = (char *)malloc(4096);

  free(ptr2);
  free(ptr3);
  end_t = clock();

  total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
  printf("Time taken: %f seconds\n", total_t);

  return 0;
}
