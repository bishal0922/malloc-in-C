#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  printf("Test 3: \n");
  clock_t start_t, end_t;
  double total_t;

  start_t = clock();

  char *ptr = (char *)malloc(10000);
  char *ptr2 = (char *)malloc(9999);

  free(ptr);
  free(ptr2);

  end_t = clock();

  total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
  printf("Time taken: %f seconds\n", total_t);

  return 0;
}
