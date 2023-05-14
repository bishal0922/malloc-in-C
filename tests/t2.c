#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  printf("Test 2: \n");
  clock_t start_t, end_t;
  double total_t;

  start_t = clock();

  char *ptr1 = (char *)malloc(1024);
  char *ptr2 = (char *)malloc(2048);

  free(ptr1);

  char *ptr3 = (char *)malloc(100000000);
  char *ptr4 = (char *)malloc(8192);

  free(ptr2);
  free(ptr3);

  char *ptr5 = (char *)malloc(1000000000);

  free(ptr4);
  free(ptr5);

  end_t = clock();

  total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
  printf("Time taken: %f seconds\n", total_t);

  return 0;
}
